/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_RideInfo1(lv_ui *ui)
{
	//Write codes RideInfo1
	ui->RideInfo1 = lv_obj_create(NULL);
	lv_obj_set_size(ui->RideInfo1, 1280, 800);
	lv_obj_set_scrollbar_mode(ui->RideInfo1, LV_SCROLLBAR_MODE_OFF);

	//Write style for RideInfo1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RideInfo1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_bg_img
	ui->RideInfo1_bg_img = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_bg_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_bg_img, &_bg1_alpha_1280x800);
	lv_img_set_pivot(ui->RideInfo1_bg_img, 0,0);
	lv_img_set_angle(ui->RideInfo1_bg_img, 0);
	lv_obj_set_pos(ui->RideInfo1_bg_img, 0, 0);
	lv_obj_set_size(ui->RideInfo1_bg_img, 1280, 800);

	//Write style for RideInfo1_bg_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_bg_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_hdr_img
	ui->RideInfo1_hdr_img = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_hdr_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_hdr_img, &_ebike_header_bg_alpha_1280x150);
	lv_img_set_pivot(ui->RideInfo1_hdr_img, 0,0);
	lv_img_set_angle(ui->RideInfo1_hdr_img, 0);
	lv_obj_set_pos(ui->RideInfo1_hdr_img, 0, 0);
	lv_obj_set_size(ui->RideInfo1_hdr_img, 1280, 150);

	//Write style for RideInfo1_hdr_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_hdr_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_date_label
	ui->RideInfo1_date_label = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_date_label, "May 5, 2022");
	lv_label_set_long_mode(ui->RideInfo1_date_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_date_label, 53, 14);
	lv_obj_set_size(ui->RideInfo1_date_label, 266, 94);

	//Write style for RideInfo1_date_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_date_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_date_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_date_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_date_label, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_date_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_time_label
	ui->RideInfo1_time_label = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_time_label, "10:28 AM");
	lv_label_set_long_mode(ui->RideInfo1_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_time_label, 960, 14);
	lv_obj_set_size(ui->RideInfo1_time_label, 266, 94);

	//Write style for RideInfo1_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_time_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_time_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_time_label, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_time_label, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_sub_label
	ui->RideInfo1_sub_label = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_sub_label, "RIDE DETAILS");
	lv_label_set_long_mode(ui->RideInfo1_sub_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_sub_label, 426, 14);
	lv_obj_set_size(ui->RideInfo1_sub_label, 480, 94);

	//Write style for RideInfo1_sub_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_sub_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_sub_label, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_sub_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_sub_label, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_sub_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_gain_img
	ui->RideInfo1_gain_img = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_gain_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_gain_img, &_ebike_icn_elevation_gained_alpha_58x52);
	lv_img_set_pivot(ui->RideInfo1_gain_img, 0,0);
	lv_img_set_angle(ui->RideInfo1_gain_img, 0);
	lv_obj_set_pos(ui->RideInfo1_gain_img, 650, 538);
	lv_obj_set_size(ui->RideInfo1_gain_img, 58, 52);

	//Write style for RideInfo1_gain_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_gain_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_lost_img
	ui->RideInfo1_lost_img = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_lost_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_lost_img, &_ebike_icn_elevation_lost_alpha_56x52);
	lv_img_set_pivot(ui->RideInfo1_lost_img, 0,0);
	lv_img_set_angle(ui->RideInfo1_lost_img, 0);
	lv_obj_set_pos(ui->RideInfo1_lost_img, 960, 538);
	lv_obj_set_size(ui->RideInfo1_lost_img, 56, 52);

	//Write style for RideInfo1_lost_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_lost_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info1_label_1
	ui->RideInfo1_info1_label_1 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info1_label_1, "Distance Travelled");
	lv_label_set_long_mode(ui->RideInfo1_info1_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info1_label_1, 773, 117);
	lv_obj_set_size(ui->RideInfo1_info1_label_1, 346, 94);

	//Write style for RideInfo1_info1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info1_label_1, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info1_label_1, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info1_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info2_label_1
	ui->RideInfo1_info2_label_1 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info2_label_1, "Average Speed");
	lv_label_set_long_mode(ui->RideInfo1_info2_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info2_label_1, 773, 329);
	lv_obj_set_size(ui->RideInfo1_info2_label_1, 400, 94);

	//Write style for RideInfo1_info2_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info2_label_1, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info2_label_1, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info2_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info2_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info3_label_1
	ui->RideInfo1_info3_label_1 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info3_label_1, "Elevation");
	lv_label_set_long_mode(ui->RideInfo1_info3_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info3_label_1, 730, 523);
	lv_obj_set_size(ui->RideInfo1_info3_label_1, 213, 94);

	//Write style for RideInfo1_info3_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info3_label_1, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info3_label_1, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info3_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info3_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info3_label_2
	ui->RideInfo1_info3_label_2 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info3_label_2, "Gained");
	lv_label_set_long_mode(ui->RideInfo1_info3_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info3_label_2, 730, 558);
	lv_obj_set_size(ui->RideInfo1_info3_label_2, 160, 94);

	//Write style for RideInfo1_info3_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info3_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info3_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info3_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info3_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_linfo4_label_1
	ui->RideInfo1_linfo4_label_1 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_linfo4_label_1, "Elevation");
	lv_label_set_long_mode(ui->RideInfo1_linfo4_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_linfo4_label_1, 1050, 523);
	lv_obj_set_size(ui->RideInfo1_linfo4_label_1, 160, 94);

	//Write style for RideInfo1_linfo4_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_linfo4_label_1, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_linfo4_label_1, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_linfo4_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_linfo4_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_linfo4_label_2
	ui->RideInfo1_linfo4_label_2 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_linfo4_label_2, "Lost");
	lv_label_set_long_mode(ui->RideInfo1_linfo4_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_linfo4_label_2, 1050, 558);
	lv_obj_set_size(ui->RideInfo1_linfo4_label_2, 160, 94);

	//Write style for RideInfo1_linfo4_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_linfo4_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_linfo4_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_linfo4_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_linfo4_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info1_label_3
	ui->RideInfo1_info1_label_3 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info1_label_3, "12.7");
	lv_label_set_long_mode(ui->RideInfo1_info1_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info1_label_3, 850, 205);
	lv_obj_set_size(ui->RideInfo1_info1_label_3, 186, 94);

	//Write style for RideInfo1_info1_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info1_label_3, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info1_label_3, &lv_font_montserratMedium_74, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info1_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info1_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info2_label_3
	ui->RideInfo1_info2_label_3 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info2_label_3, "16.1");
	lv_label_set_long_mode(ui->RideInfo1_info2_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info2_label_3, 853, 411);
	lv_obj_set_size(ui->RideInfo1_info2_label_3, 186, 94);

	//Write style for RideInfo1_info2_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info2_label_3, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info2_label_3, &lv_font_montserratMedium_74, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info2_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info2_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info3_label_3
	ui->RideInfo1_info3_label_3 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info3_label_3, "25.1");
	lv_label_set_long_mode(ui->RideInfo1_info3_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info3_label_3, 650, 623);
	lv_obj_set_size(ui->RideInfo1_info3_label_3, 133, 94);

	//Write style for RideInfo1_info3_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info3_label_3, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info3_label_3, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info3_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info3_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info4_label_3
	ui->RideInfo1_info4_label_3 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info4_label_3, "10.2");
	lv_label_set_long_mode(ui->RideInfo1_info4_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info4_label_3, 960, 623);
	lv_obj_set_size(ui->RideInfo1_info4_label_3, 133, 94);

	//Write style for RideInfo1_info4_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info4_label_3, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info4_label_3, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info4_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info4_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info1_label_2
	ui->RideInfo1_info1_label_2 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info1_label_2, "km");
	lv_label_set_long_mode(ui->RideInfo1_info1_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info1_label_2, 997, 226);
	lv_obj_set_size(ui->RideInfo1_info1_label_2, 133, 94);

	//Write style for RideInfo1_info1_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info1_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info1_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info1_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info1_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info3_label_4
	ui->RideInfo1_info3_label_4 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info3_label_4, "m");
	lv_label_set_long_mode(ui->RideInfo1_info3_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info3_label_4, 768, 644);
	lv_obj_set_size(ui->RideInfo1_info3_label_4, 80, 94);

	//Write style for RideInfo1_info3_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info3_label_4, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info3_label_4, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info3_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info3_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info2_label_2
	ui->RideInfo1_info2_label_2 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info2_label_2, "km/h");
	lv_label_set_long_mode(ui->RideInfo1_info2_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info2_label_2, 997, 432);
	lv_obj_set_size(ui->RideInfo1_info2_label_2, 160, 94);

	//Write style for RideInfo1_info2_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info2_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info2_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info2_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info2_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info4_label_4
	ui->RideInfo1_info4_label_4 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_info4_label_4, "m");
	lv_label_set_long_mode(ui->RideInfo1_info4_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_info4_label_4, 1072, 644);
	lv_obj_set_size(ui->RideInfo1_info4_label_4, 80, 94);

	//Write style for RideInfo1_info4_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_info4_label_4, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_info4_label_4, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_info4_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_info4_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_info4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info_img_v
	ui->RideInfo1_info_img_v = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_info_img_v, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_info_img_v, &_info_h_alpha_560x8);
	lv_img_set_pivot(ui->RideInfo1_info_img_v, 0,0);
	lv_img_set_angle(ui->RideInfo1_info_img_v, 0);
	lv_obj_set_pos(ui->RideInfo1_info_img_v, 640, 500);
	lv_obj_set_size(ui->RideInfo1_info_img_v, 560, 8);

	//Write style for RideInfo1_info_img_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_info_img_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_info_img_h
	ui->RideInfo1_info_img_h = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_info_img_h, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_info_img_h, &_info_v_alpha_8x176);
	lv_img_set_pivot(ui->RideInfo1_info_img_h, 0,0);
	lv_img_set_angle(ui->RideInfo1_info_img_h, 0);
	lv_obj_set_pos(ui->RideInfo1_info_img_h, 912, 517);
	lv_obj_set_size(ui->RideInfo1_info_img_h, 8, 176);

	//Write style for RideInfo1_info_img_h, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_info_img_h, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_img_1
	ui->RideInfo1_img_1 = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_img_1, &_info_h_alpha_560x8);
	lv_img_set_pivot(ui->RideInfo1_img_1, 0,0);
	lv_img_set_angle(ui->RideInfo1_img_1, 0);
	lv_obj_set_pos(ui->RideInfo1_img_1, 640, 308);
	lv_obj_set_size(ui->RideInfo1_img_1, 560, 8);

	//Write style for RideInfo1_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_footer_bg_img
	ui->RideInfo1_footer_bg_img = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_footer_bg_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_footer_bg_img, &_ebike_footer_bg_alpha_1280x102);
	lv_img_set_pivot(ui->RideInfo1_footer_bg_img, 0,0);
	lv_img_set_angle(ui->RideInfo1_footer_bg_img, 0);
	lv_obj_set_pos(ui->RideInfo1_footer_bg_img, 0, 697);
	lv_obj_set_size(ui->RideInfo1_footer_bg_img, 1280, 102);

	//Write style for RideInfo1_footer_bg_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_footer_bg_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_footer_line_1
	ui->RideInfo1_footer_line_1 = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_footer_line_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_footer_line_1, &_ebike_footer_line_2_alpha_58x11);
	lv_img_set_pivot(ui->RideInfo1_footer_line_1, 0,0);
	lv_img_set_angle(ui->RideInfo1_footer_line_1, 0);
	lv_obj_set_pos(ui->RideInfo1_footer_line_1, 506, 764);
	lv_obj_set_size(ui->RideInfo1_footer_line_1, 58, 11);

	//Write style for RideInfo1_footer_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_footer_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_footer_line_2
	ui->RideInfo1_footer_line_2 = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_footer_line_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_footer_line_2, &_ebike_footer_line_1_alpha_58x11);
	lv_img_set_pivot(ui->RideInfo1_footer_line_2, 0,0);
	lv_img_set_angle(ui->RideInfo1_footer_line_2, 0);
	lv_obj_set_pos(ui->RideInfo1_footer_line_2, 613, 764);
	lv_obj_set_size(ui->RideInfo1_footer_line_2, 58, 11);

	//Write style for RideInfo1_footer_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_footer_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_footer_line_3
	ui->RideInfo1_footer_line_3 = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_footer_line_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_footer_line_3, &_ebike_footer_line_2_alpha_58x11);
	lv_img_set_pivot(ui->RideInfo1_footer_line_3, 0,0);
	lv_img_set_angle(ui->RideInfo1_footer_line_3, 0);
	lv_obj_set_pos(ui->RideInfo1_footer_line_3, 720, 764);
	lv_obj_set_size(ui->RideInfo1_footer_line_3, 58, 11);

	//Write style for RideInfo1_footer_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_footer_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_dis_img
	ui->RideInfo1_dis_img = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_dis_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_dis_img, &_ebike_icn_distance_travelled_big_alpha_112x82);
	lv_img_set_pivot(ui->RideInfo1_dis_img, 0,0);
	lv_img_set_angle(ui->RideInfo1_dis_img, 0);
	lv_obj_set_pos(ui->RideInfo1_dis_img, 730, 191);
	lv_obj_set_size(ui->RideInfo1_dis_img, 112, 82);

	//Write style for RideInfo1_dis_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_dis_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_ava_img
	ui->RideInfo1_ava_img = lv_img_create(ui->RideInfo1);
	lv_obj_add_flag(ui->RideInfo1_ava_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo1_ava_img, &_ebike_icn_average_speed_big_alpha_106x91);
	lv_img_set_pivot(ui->RideInfo1_ava_img, 0,0);
	lv_img_set_angle(ui->RideInfo1_ava_img, 0);
	lv_obj_set_pos(ui->RideInfo1_ava_img, 730, 397);
	lv_obj_set_size(ui->RideInfo1_ava_img, 106, 91);

	//Write style for RideInfo1_ava_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo1_ava_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_ride_chart
	ui->RideInfo1_ride_chart = lv_chart_create(ui->RideInfo1);
	lv_chart_set_type(ui->RideInfo1_ride_chart, LV_CHART_TYPE_LINE);
	lv_chart_set_div_line_count(ui->RideInfo1_ride_chart, 5, 5);
	lv_chart_set_point_count(ui->RideInfo1_ride_chart, 10);
	lv_chart_set_range(ui->RideInfo1_ride_chart, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
	lv_chart_set_range(ui->RideInfo1_ride_chart, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
	lv_chart_set_zoom_x(ui->RideInfo1_ride_chart, 256);
	lv_chart_set_zoom_y(ui->RideInfo1_ride_chart, 256);
	ui->RideInfo1_ride_chart_0 = lv_chart_add_series(ui->RideInfo1_ride_chart, lv_color_hex(0x0080ff), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 10);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 20);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 30);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 40);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 20);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 50);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 40);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 30);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 40);
	lv_chart_set_next_value(ui->RideInfo1_ride_chart, ui->RideInfo1_ride_chart_0, 30);
#endif
	lv_obj_set_pos(ui->RideInfo1_ride_chart, 80, 182);
	lv_obj_set_size(ui->RideInfo1_ride_chart, 480, 455);
	lv_obj_set_scrollbar_mode(ui->RideInfo1_ride_chart, LV_SCROLLBAR_MODE_OFF);

	//Write style for RideInfo1_ride_chart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RideInfo1_ride_chart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RideInfo1_ride_chart, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->RideInfo1_ride_chart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->RideInfo1_ride_chart, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->RideInfo1_ride_chart, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_ride_chart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->RideInfo1_ride_chart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_ride_chart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RideInfo1_ride_chart, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_border_width(ui->RideInfo1_ride_chart, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->RideInfo1_ride_chart, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->RideInfo1_ride_chart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->RideInfo1_ride_chart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->RideInfo1_ride_chart, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_line_width(ui->RideInfo1_ride_chart, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_line_color(ui->RideInfo1_ride_chart, lv_color_hex(0x7d8490), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_line_opa(ui->RideInfo1_ride_chart, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->RideInfo1_ride_chart, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style for RideInfo1_ride_chart, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->RideInfo1_ride_chart, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_ride_chart, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_ride_chart, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->RideInfo1_ride_chart, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->RideInfo1_ride_chart, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->RideInfo1_ride_chart, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_0
	ui->RideInfo1_elev_label_0 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_0, "Elevation Graph");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_0, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_0, 122, 238);
	lv_obj_set_size(ui->RideInfo1_elev_label_0, 400, 94);

	//Write style for RideInfo1_elev_label_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_0, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_0, &lv_font_montserratMedium_42, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_1
	ui->RideInfo1_elev_label_1 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_1, "15.3");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_1, 240, 326);
	lv_obj_set_size(ui->RideInfo1_elev_label_1, 133, 94);

	//Write style for RideInfo1_elev_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_1, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_1, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_2
	ui->RideInfo1_elev_label_2 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_2, "m");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_2, 349, 347);
	lv_obj_set_size(ui->RideInfo1_elev_label_2, 80, 94);

	//Write style for RideInfo1_elev_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_3
	ui->RideInfo1_elev_label_3 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_3, "Km");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_3, 573, 611);
	lv_obj_set_size(ui->RideInfo1_elev_label_3, 80, 94);

	//Write style for RideInfo1_elev_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_3, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_3, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_4
	ui->RideInfo1_elev_label_4 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_4, "Meter");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_4, 40, 131);
	lv_obj_set_size(ui->RideInfo1_elev_label_4, 106, 94);

	//Write style for RideInfo1_elev_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_4, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_4, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_5
	ui->RideInfo1_elev_label_5 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_5, "5");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_5, 114, 652);
	lv_obj_set_size(ui->RideInfo1_elev_label_5, 42, 94);

	//Write style for RideInfo1_elev_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_5, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_5, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_6
	ui->RideInfo1_elev_label_6 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_6, "10");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_6, 189, 652);
	lv_obj_set_size(ui->RideInfo1_elev_label_6, 42, 94);

	//Write style for RideInfo1_elev_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_6, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_6, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_7
	ui->RideInfo1_elev_label_7 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_7, "15");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_7, 269, 652);
	lv_obj_set_size(ui->RideInfo1_elev_label_7, 42, 94);

	//Write style for RideInfo1_elev_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_7, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_7, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_8
	ui->RideInfo1_elev_label_8 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_8, "20");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_8, 346, 652);
	lv_obj_set_size(ui->RideInfo1_elev_label_8, 53, 94);

	//Write style for RideInfo1_elev_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_8, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_8, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_9
	ui->RideInfo1_elev_label_9 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_9, "25");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_9, 424, 652);
	lv_obj_set_size(ui->RideInfo1_elev_label_9, 42, 94);

	//Write style for RideInfo1_elev_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_9, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_9, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_10
	ui->RideInfo1_elev_label_10 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_10, "30");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_10, 504, 652);
	lv_obj_set_size(ui->RideInfo1_elev_label_10, 48, 94);

	//Write style for RideInfo1_elev_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_10, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_10, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_11
	ui->RideInfo1_elev_label_11 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_11, "10");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_11, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_11, 32, 588);
	lv_obj_set_size(ui->RideInfo1_elev_label_11, 42, 94);

	//Write style for RideInfo1_elev_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_11, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_11, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_12
	ui->RideInfo1_elev_label_12 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_12, "20");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_12, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_12, 32, 514);
	lv_obj_set_size(ui->RideInfo1_elev_label_12, 48, 94);

	//Write style for RideInfo1_elev_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_12, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_12, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_13
	ui->RideInfo1_elev_label_13 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_13, "30");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_13, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_13, 32, 441);
	lv_obj_set_size(ui->RideInfo1_elev_label_13, 48, 94);

	//Write style for RideInfo1_elev_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_13, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_13, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_13, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_14
	ui->RideInfo1_elev_label_14 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_14, "40");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_14, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_14, 32, 367);
	lv_obj_set_size(ui->RideInfo1_elev_label_14, 48, 94);

	//Write style for RideInfo1_elev_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_14, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_14, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_14, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_elev_label_15
	ui->RideInfo1_elev_label_15 = lv_label_create(ui->RideInfo1);
	lv_label_set_text(ui->RideInfo1_elev_label_15, "50");
	lv_label_set_long_mode(ui->RideInfo1_elev_label_15, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo1_elev_label_15, 32, 294);
	lv_obj_set_size(ui->RideInfo1_elev_label_15, 48, 94);

	//Write style for RideInfo1_elev_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo1_elev_label_15, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_elev_label_15, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_elev_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_elev_label_15, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_elev_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo1_cover_imgbtn
	ui->RideInfo1_cover_imgbtn = lv_imgbtn_create(ui->RideInfo1);
	ui->RideInfo1_cover_imgbtn_label = lv_label_create(ui->RideInfo1_cover_imgbtn);
	lv_label_set_text(ui->RideInfo1_cover_imgbtn_label, "");
	lv_label_set_long_mode(ui->RideInfo1_cover_imgbtn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->RideInfo1_cover_imgbtn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->RideInfo1_cover_imgbtn, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->RideInfo1_cover_imgbtn, 0, 0);
	lv_obj_set_size(ui->RideInfo1_cover_imgbtn, 1280, 800);

	//Write style for RideInfo1_cover_imgbtn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->RideInfo1_cover_imgbtn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo1_cover_imgbtn, &lv_font_simsun_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo1_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo1_cover_imgbtn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo1_cover_imgbtn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RideInfo1_cover_imgbtn, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->RideInfo1_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->RideInfo1_cover_imgbtn, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->RideInfo1_cover_imgbtn, &lv_font_simsun_42, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->RideInfo1_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->RideInfo1_cover_imgbtn, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for RideInfo1_cover_imgbtn, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->RideInfo1_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->RideInfo1_cover_imgbtn, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->RideInfo1_cover_imgbtn, &lv_font_simsun_42, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->RideInfo1_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->RideInfo1_cover_imgbtn, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for RideInfo1_cover_imgbtn, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->RideInfo1_cover_imgbtn, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//The custom code of RideInfo1.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->RideInfo1);

	//Init events for screen.
	events_init_RideInfo1(ui);
}
