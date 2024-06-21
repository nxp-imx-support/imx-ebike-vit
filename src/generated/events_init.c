/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void Overview_cover_imgbtn_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SHORT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.RideInfo1, guider_ui.RideInfo1_del, &guider_ui.Overview_del, setup_scr_RideInfo1, LV_SCR_LOAD_ANIM_OVER_LEFT, 1, 0, true, false);
		break;
	}
	default:
		break;
	}
}
void events_init_Overview(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Overview_cover_imgbtn, Overview_cover_imgbtn_event_handler, LV_EVENT_ALL, NULL);
}
static void RideInfo1_cover_imgbtn_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SHORT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.RideInfo2, guider_ui.RideInfo2_del, &guider_ui.RideInfo1_del, setup_scr_RideInfo2, LV_SCR_LOAD_ANIM_OVER_LEFT, 1, 0, true, false);
		break;
	}
	default:
		break;
	}
}
void events_init_RideInfo1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->RideInfo1_cover_imgbtn, RideInfo1_cover_imgbtn_event_handler, LV_EVENT_ALL, NULL);
}
static void RideInfo2_cover_imgbtn_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SHORT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Overview, guider_ui.Overview_del, &guider_ui.RideInfo2_del, setup_scr_Overview, LV_SCR_LOAD_ANIM_OVER_LEFT, 1, 0, true, false);
		break;
	}
	default:
		break;
	}
}
void events_init_RideInfo2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->RideInfo2_cover_imgbtn, RideInfo2_cover_imgbtn_event_handler, LV_EVENT_ALL, NULL);
}

void events_init(lv_ui *ui)
{

}
