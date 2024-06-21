/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

/*********************
 *      INCLUDES
 *********************/
#define _DEFAULT_SOURCE /* needed for usleep() */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <limits.h>
#include <errno.h>
#include <poll.h>
#include "lvgl.h"
#include "lv_drivers/wayland/wayland.h"
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"
#include <string.h>
#include "command-interface.h"
#include <signal.h>

/*********************
 *      DEFINES
 *********************/
struct pollfd pfd;
uint32_t time_till_next;
int sleep_time;

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static bool close_cb(lv_disp_t * disp);
static void sig_handler(int signum);
static void hal_init(void);
static void * tick_thread(void * data);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

lv_ui guider_ui;

int main(int argc, char ** argv)
{
    (void) argc;    /*Unused*/
    (void) argv;    /*Unused*/
    int err;

    signal(SIGINT, sig_handler); // Register signal handler

    /*Initialize LittlevGL*/
    lv_init();

    /*Initialize the HAL (display, input devices, tick) for LittlevGL*/
    hal_init();

    /*Create a GUI-Guider app */
    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);

    pfd.fd = lv_wayland_get_fd();
    pfd.events = POLLIN;

    ebkie_init();

    pthread_t tid1;
    err = pthread_create(&tid1, NULL, &guage_update_thread, NULL);
    if (err != 0) {
        printf("\ncan't create thread :[%s]", strerror(err));
        exit(1);
    }

    pthread_t tid2;
    err = pthread_create(&tid2, NULL, &screen_update_thread, NULL);
    if (err != 0) {
        printf("\ncan't create thread :[%s]", strerror(err));
        exit(1);
    }

    startCommandInterface();

    while(1) {
        /* Periodically call the lv_task handler.
         * It could be done in a timer interrupt or an OS task too.*/
        time_till_next = lv_wayland_timer_handler();
#if LV_USE_VIDEO
        video_play(&guider_ui);
#endif

        usleep(5 * 1000);

        /* Run until the last window closes */
        if (!lv_wayland_window_is_open(NULL)) {
            break;
        }
        /* Wait for something interesting to happen */
        if (time_till_next == LV_NO_TIMER_READY) {
            sleep_time = -1;
        } else if (time_till_next > INT_MAX) {
            sleep_time = INT_MAX;
        } else {
           sleep_time = time_till_next;
        }
        while ((poll(&pfd, 1, sleep_time) < 0) && (errno == EINTR));
    }

    return 0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void sig_handler(int signum)
{
    printf("\nInside Signal handler function\n");
    printf("------SIGINT signal catched------\n");
    printf("Program exit...\n");
    lv_deinit();
    lv_wayland_deinit();

    system("/opt/gopoint-apps/scripts/multimedia/ebike-vit/restore.sh");
    exit(0);
}
static bool close_cb(lv_disp_t * disp)
{
    printf("\nInside close callback function!!\n");
    printf("------Close event catched------\n");
    printf("Program exit...\n");
    lv_deinit();
    lv_wayland_deinit();
	
    system("/opt/gopoint-apps/scripts/multimedia/ebike-vit/restore.sh");	
    exit(0);
}

/**
 * Initialize the Hardware Abstraction Layer (HAL) for the Littlev graphics library
 */
static void hal_init(void)
{
    lv_wayland_init();

    /* Create a display */
    lv_disp_t * disp = lv_wayland_create_window(LV_HOR_RES_MAX, LV_VER_RES_MAX, "E-BIKE VIT", close_cb);

    /* Tick init.
     * You have to call 'lv_tick_inc()' in periodically to inform LittelvGL about how much time were elapsed
     */
    pthread_t tid;
    int err = pthread_create(&tid, NULL, &tick_thread, NULL);
    if (err != 0) {
        printf("\ncan't create thread :[%s]", strerror(err));
        exit(1);
    }
}

/**
 * A task to measure the elapsed time for LittlevGL
 * @param data unused
 * @return never return
 */
static void * tick_thread(void * data)
{
    (void)data;

    while(1) {
        usleep(5*1000);   /*Sleep for 5 millisecond*/
        lv_tick_inc(5); /*Tell LittelvGL that 5 milliseconds were elapsed*/
    }
}

