/*
 * Copyright 2024 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file custom.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */

void custom_init(lv_ui *ui)
{
    /* Add your codes here */
}

const char *turn_dist[]={"3.1KM","3.0KM","2.9KM","2.8KM","2.7KM","2.6KM","2.5KM","2.4KM","2.3KM","2.2KM", NULL};
const char *trav_dist[]={"12.7","12.8","12.9","13.0","13.1","13.2","13.3","13.4","13.5","13.6", NULL};
const char *rema_dist[]={"18.3","18.2","18.1","18.0","17.9","17.8","17.7","17.6","17.5","17.4", NULL};
const char *aver_speed[]={"16.1","16.2","16.1","16.0","15.9","16.0","16.1","16.2","16.3","16.2", NULL};
const char *elap_time[]={"46:28","46:29","46:30","46:31","46:32","46:33","46:34","46:35","46:36","46:37", NULL};
const char *elev_gain[]={"25.1","25.3","25.4","25.2","25.0","24.8","24.7","25.8","26.5","24.2", NULL};
const char *elev_lost[]={"10.2","11.8","12.0","11.9","14.7","16.2","14.3","17.5","13.6","11.8", NULL};
const char *elev_grap[]={"15.3","15.4","15.5","15.6","15.6","15.5","15.6","15.5","15.4","15.3", NULL};
const char *calo_burn[]={"462","462","463","463","464","465","466","466","467","468", NULL};
const char *heart_rate[]={"118","119","120","124","123","121","119","118","121","124", NULL};
const char *cadence[]={"86","84","83","85","88","92","96","98","89","86", NULL};
const char *watts[]={"15.7","15.8","15.8","15.9","16.0","16.0","16.1","16.2","16.3","16.4", NULL};
static int chart_val[100];
const int gauge_val[]={27,26,25,24,23,22,21,20,19,19,20,20,21,21,22,23,24,23,22,21,20,20,19,18,17,16,15,15,15,16,17,18,19,20,21,21,22,22,21,20,19,19,19,20,21,22,23,24,25,26,26,27,28,28,28};
const char *speed_num_1[]={"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29", NULL};
const char *speed_num_2[]={"27","26","25","24","23","22","21","20","19","19","20","20","21","21","22","23","24","23","22","21","20","20","19","18","17","16","15","15","15","16","17","18","19","20","21","21","22","22","21","20","19","19","19","20","21","22","23","24","25","26","26","27","28","28","28"};

lv_chart_series_t *pchart_ser;

void screen_update(void)
{
    static int i = 0, j = 0;

    if(i > 9) {
        i = 0;
    }
    if(lv_scr_act() == guider_ui.Overview) {
        lv_label_set_text(guider_ui.Overview_dist_label, turn_dist[i]);
        lv_label_set_text(guider_ui.Overview_info1_label_3, trav_dist[i]);
        lv_label_set_text(guider_ui.Overview_info2_label_3, aver_speed[i]);
        lv_label_set_text(guider_ui.Overview_info3_label_3, rema_dist[i]);
        lv_label_set_text(guider_ui.Overview_info4_label_3, elap_time[i]);
    }

    if(lv_scr_act() == guider_ui.RideInfo1) {
        lv_label_set_text(guider_ui.RideInfo1_info1_label_3, trav_dist[i]);
        lv_label_set_text(guider_ui.RideInfo1_info2_label_3, aver_speed[i]);
        lv_label_set_text(guider_ui.RideInfo1_info3_label_3, elev_gain[i]);
        lv_label_set_text(guider_ui.RideInfo1_info4_label_3, elev_lost[i]);
        lv_label_set_text(guider_ui.RideInfo1_elev_label_1, elev_grap[i]);
        if(pchart_ser == NULL)
            pchart_ser = lv_chart_get_series_next(guider_ui.RideInfo1_ride_chart, NULL);
        lv_chart_set_next_value(guider_ui.RideInfo1_ride_chart, pchart_ser, chart_val[j++]);
        lv_chart_refresh(guider_ui.RideInfo1_ride_chart);
        if(j > 99) {
            j = 0;
	}
    }

    if(lv_scr_act() == guider_ui.RideInfo2) {
        lv_label_set_text(guider_ui.RideInfo2_dist_label, turn_dist[i]);
        lv_label_set_text(guider_ui.RideInfo2_info1_label_3, calo_burn[i]);
        lv_label_set_text(guider_ui.RideInfo2_info2_label_3, heart_rate[i]);
        lv_label_set_text(guider_ui.RideInfo2_info3_label_3, cadence[i]);
        lv_label_set_text(guider_ui.RideInfo2_info4_label_3, elap_time[i]);
        lv_label_set_text(guider_ui.RideInfo2_watts_label_1, watts[i]);
    }

    i ++;
}

void set_gauge_val(void)
{
    static int gauge_i = 0;

    lv_img_set_angle(guider_ui.Overview_needle_img, 1450 + (gauge_val[gauge_i++])*60);
    lv_label_set_text(guider_ui.Overview_gauge_label_1, speed_num_2[gauge_i - 1]);

    if(gauge_i == sizeof(gauge_val) / sizeof(int))
    {
        gauge_i = 0;
    }
}

void gauge_update(void)
{
    static int gauge_cur_val = 0, dir = 0, set_val = 0;

    if(set_val) {
        set_gauge_val();
        return;
    }

    if(gauge_cur_val == 28) {
        dir = 1;
        set_val = 1;
    }

    if(gauge_cur_val == 0) {
        dir = 0;
    }

    if(lv_scr_act() == guider_ui.Overview) {
        if(dir == 0) {
            lv_img_set_angle(guider_ui.Overview_needle_img, 1450 + (gauge_cur_val++)*60);
            lv_label_set_text(guider_ui.Overview_gauge_label_1, speed_num_1[gauge_cur_val - 1]);
	}
        else {
            lv_img_set_angle(guider_ui.Overview_needle_img, 1450 + (gauge_cur_val--)*60);
            lv_label_set_text(guider_ui.Overview_gauge_label_1, speed_num_1[gauge_cur_val + 1]);
	}
    }
}

void ebkie_init(void)
{
    int cnt = 0, i = 0;

    for(cnt = 0 ; cnt < 20 ; cnt ++, i ++) {
	    chart_val[i] = 10 + cnt;
    }

    for(cnt = 0 ; cnt < 10 ; cnt++, i++) {
        chart_val[i] = 29 - cnt;
    }

    for(cnt = 0 ; cnt < 10 ; cnt++, i++) {
        chart_val[i] = 19 + cnt;
    }

    for(cnt = 0 ; cnt < 20 ; cnt++, i++) {
        chart_val[i] = 29 - cnt;
    }

    for(cnt = 0 ; cnt < 10 ; cnt++, i++) {
	chart_val[i] = 9 + cnt;
    }

    for(cnt = 0 ; cnt < 10 ; cnt++, i++) {
        chart_val[i] = 19 - cnt;
    }

    for(cnt = 0 ; cnt < 10 ; cnt++, i++) {
        chart_val[i] = 9 + cnt;
    }

    for(cnt = 0 ; cnt < 10 ; cnt++, i++) {
        chart_val[i] = 19 - cnt;
    }
}

void * guage_update_thread(void * data)
{
    lv_obj_t * act_scr;

    while(1) {
        usleep(500 * 1000);

        gauge_update();
        act_scr = lv_scr_act();
        lv_obj_invalidate(act_scr);
    }

}

void * screen_update_thread(void * data)
{
    lv_obj_t * act_scr;

    while(1) {
        usleep(2000 * 1000);

        screen_update();
        act_scr = lv_scr_act();
        lv_obj_invalidate(act_scr);
    }
}
