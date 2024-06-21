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



void setup_scr_RideInfo2(lv_ui *ui)
{
	//Write codes RideInfo2
	ui->RideInfo2 = lv_obj_create(NULL);
	lv_obj_set_size(ui->RideInfo2, 1280, 800);
	lv_obj_set_scrollbar_mode(ui->RideInfo2, LV_SCROLLBAR_MODE_OFF);

	//Write style for RideInfo2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RideInfo2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_bg_img
	ui->RideInfo2_bg_img = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_bg_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_bg_img, &_bg1_alpha_1280x800);
	lv_img_set_pivot(ui->RideInfo2_bg_img, 0,0);
	lv_img_set_angle(ui->RideInfo2_bg_img, 0);
	lv_obj_set_pos(ui->RideInfo2_bg_img, 0, 0);
	lv_obj_set_size(ui->RideInfo2_bg_img, 1280, 800);

	//Write style for RideInfo2_bg_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_bg_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_hdr_img
	ui->RideInfo2_hdr_img = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_hdr_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_hdr_img, &_ebike_header_bg_alpha_1280x150);
	lv_img_set_pivot(ui->RideInfo2_hdr_img, 0,0);
	lv_img_set_angle(ui->RideInfo2_hdr_img, 0);
	lv_obj_set_pos(ui->RideInfo2_hdr_img, 0, 0);
	lv_obj_set_size(ui->RideInfo2_hdr_img, 1280, 150);

	//Write style for RideInfo2_hdr_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_hdr_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_date_label
	ui->RideInfo2_date_label = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_date_label, "May 5, 2022");
	lv_label_set_long_mode(ui->RideInfo2_date_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_date_label, 53, 14);
	lv_obj_set_size(ui->RideInfo2_date_label, 266, 94);

	//Write style for RideInfo2_date_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_date_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_date_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_date_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_date_label, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_date_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_time_label
	ui->RideInfo2_time_label = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_time_label, "10:28 AM");
	lv_label_set_long_mode(ui->RideInfo2_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_time_label, 960, 14);
	lv_obj_set_size(ui->RideInfo2_time_label, 266, 94);

	//Write style for RideInfo2_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_time_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_time_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_time_label, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_time_label, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_sub_label
	ui->RideInfo2_sub_label = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_sub_label, "RIDE DETAILS");
	lv_label_set_long_mode(ui->RideInfo2_sub_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_sub_label, 426, 14);
	lv_obj_set_size(ui->RideInfo2_sub_label, 480, 94);

	//Write style for RideInfo2_sub_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_sub_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_sub_label, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_sub_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_sub_label, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_sub_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_sub_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_gps_icon
	ui->RideInfo2_gps_icon = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_gps_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_gps_icon, &_ebike_gps_arrow_1_alpha_74x141);
	lv_img_set_pivot(ui->RideInfo2_gps_icon, 0,0);
	lv_img_set_angle(ui->RideInfo2_gps_icon, 0);
	lv_obj_set_pos(ui->RideInfo2_gps_icon, 730, 147);
	lv_obj_set_size(ui->RideInfo2_gps_icon, 74, 141);

	//Write style for RideInfo2_gps_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_gps_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_calories_icon
	ui->RideInfo2_calories_icon = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_calories_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_calories_icon, &_ebike_icn_calories_burned_alpha_56x41);
	lv_img_set_pivot(ui->RideInfo2_calories_icon, 0,0);
	lv_img_set_angle(ui->RideInfo2_calories_icon, 0);
	lv_obj_set_pos(ui->RideInfo2_calories_icon, 650, 352);
	lv_obj_set_size(ui->RideInfo2_calories_icon, 56, 41);

	//Write style for RideInfo2_calories_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_calories_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_hr_icon
	ui->RideInfo2_hr_icon = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_hr_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_hr_icon, &_ebike_icn_heart_rate_alpha_61x50);
	lv_img_set_pivot(ui->RideInfo2_hr_icon, 0,0);
	lv_img_set_angle(ui->RideInfo2_hr_icon, 0);
	lv_obj_set_pos(ui->RideInfo2_hr_icon, 960, 352);
	lv_obj_set_size(ui->RideInfo2_hr_icon, 61, 50);

	//Write style for RideInfo2_hr_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_hr_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_cadence_icon
	ui->RideInfo2_cadence_icon = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_cadence_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_cadence_icon, &_ebike_icn_round_per_minute_alpha_53x58);
	lv_img_set_pivot(ui->RideInfo2_cadence_icon, 0,0);
	lv_img_set_angle(ui->RideInfo2_cadence_icon, 0);
	lv_obj_set_pos(ui->RideInfo2_cadence_icon, 650, 538);
	lv_obj_set_size(ui->RideInfo2_cadence_icon, 53, 58);

	//Write style for RideInfo2_cadence_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_cadence_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_elapsed_icon
	ui->RideInfo2_elapsed_icon = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_elapsed_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_elapsed_icon, &_ebike_icn_elapsed_time_2_alpha_53x73);
	lv_img_set_pivot(ui->RideInfo2_elapsed_icon, 0,0);
	lv_img_set_angle(ui->RideInfo2_elapsed_icon, 0);
	lv_obj_set_pos(ui->RideInfo2_elapsed_icon, 960, 538);
	lv_obj_set_size(ui->RideInfo2_elapsed_icon, 53, 73);

	//Write style for RideInfo2_elapsed_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_elapsed_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_dist_label
	ui->RideInfo2_dist_label = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_dist_label, "3.1 KM");
	lv_label_set_long_mode(ui->RideInfo2_dist_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_dist_label, 853, 132);
	lv_obj_set_size(ui->RideInfo2_dist_label, 266, 94);

	//Write style for RideInfo2_dist_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_dist_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_dist_label, &lv_font_montserratMedium_74, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_dist_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_dist_label, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_dist_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_dist_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_dir_label
	ui->RideInfo2_dir_label = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_dir_label, "Turn right to");
	lv_label_set_long_mode(ui->RideInfo2_dir_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_dir_label, 853, 214);
	lv_obj_set_size(ui->RideInfo2_dir_label, 266, 94);

	//Write style for RideInfo2_dir_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_dir_label, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_dir_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_dir_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_dir_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_dir_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_str_label
	ui->RideInfo2_str_label = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_str_label, "Ed Bluestein Blvd");
	lv_label_set_long_mode(ui->RideInfo2_str_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_str_label, 853, 255);
	lv_obj_set_size(ui->RideInfo2_str_label, 320, 94);

	//Write style for RideInfo2_str_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_str_label, lv_color_hex(0xcccccc), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_str_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_str_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_str_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_str_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info1_label_1
	ui->RideInfo2_info1_label_1 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info1_label_1, "Calories");
	lv_label_set_long_mode(ui->RideInfo2_info1_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info1_label_1, 730, 341);
	lv_obj_set_size(ui->RideInfo2_info1_label_1, 160, 94);

	//Write style for RideInfo2_info1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info1_label_1, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info1_label_1, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info1_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info1_label_2
	ui->RideInfo2_info1_label_2 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info1_label_2, "Burned");
	lv_label_set_long_mode(ui->RideInfo2_info1_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info1_label_2, 730, 376);
	lv_obj_set_size(ui->RideInfo2_info1_label_2, 160, 94);

	//Write style for RideInfo2_info1_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info1_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info1_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info1_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info1_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info2_label_1
	ui->RideInfo2_info2_label_1 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info2_label_1, "Heart");
	lv_label_set_long_mode(ui->RideInfo2_info2_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info2_label_1, 1050, 341);
	lv_obj_set_size(ui->RideInfo2_info2_label_1, 160, 94);

	//Write style for RideInfo2_info2_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info2_label_1, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info2_label_1, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info2_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info2_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info2_label_2
	ui->RideInfo2_info2_label_2 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info2_label_2, "Rate");
	lv_label_set_long_mode(ui->RideInfo2_info2_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info2_label_2, 1050, 376);
	lv_obj_set_size(ui->RideInfo2_info2_label_2, 160, 94);

	//Write style for RideInfo2_info2_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info2_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info2_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info2_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info2_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info3_label_1
	ui->RideInfo2_info3_label_1 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info3_label_1, "Cadence");
	lv_label_set_long_mode(ui->RideInfo2_info3_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info3_label_1, 730, 523);
	lv_obj_set_size(ui->RideInfo2_info3_label_1, 213, 94);

	//Write style for RideInfo2_info3_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info3_label_1, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info3_label_1, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info3_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info3_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_linfo4_label_1
	ui->RideInfo2_linfo4_label_1 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_linfo4_label_1, "Elapsed");
	lv_label_set_long_mode(ui->RideInfo2_linfo4_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_linfo4_label_1, 1050, 523);
	lv_obj_set_size(ui->RideInfo2_linfo4_label_1, 160, 94);

	//Write style for RideInfo2_linfo4_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_linfo4_label_1, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_linfo4_label_1, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_linfo4_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_linfo4_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_linfo4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_linfo4_label_2
	ui->RideInfo2_linfo4_label_2 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_linfo4_label_2, "Time");
	lv_label_set_long_mode(ui->RideInfo2_linfo4_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_linfo4_label_2, 1050, 558);
	lv_obj_set_size(ui->RideInfo2_linfo4_label_2, 160, 94);

	//Write style for RideInfo2_linfo4_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_linfo4_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_linfo4_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_linfo4_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_linfo4_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_linfo4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info1_label_3
	ui->RideInfo2_info1_label_3 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info1_label_3, "462");
	lv_label_set_long_mode(ui->RideInfo2_info1_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info1_label_3, 650, 426);
	lv_obj_set_size(ui->RideInfo2_info1_label_3, 133, 94);

	//Write style for RideInfo2_info1_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info1_label_3, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info1_label_3, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info1_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info1_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info2_label_3
	ui->RideInfo2_info2_label_3 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info2_label_3, "118");
	lv_label_set_long_mode(ui->RideInfo2_info2_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info2_label_3, 960, 426);
	lv_obj_set_size(ui->RideInfo2_info2_label_3, 133, 94);

	//Write style for RideInfo2_info2_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info2_label_3, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info2_label_3, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info2_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info2_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info3_label_3
	ui->RideInfo2_info3_label_3 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info3_label_3, "86");
	lv_label_set_long_mode(ui->RideInfo2_info3_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info3_label_3, 650, 632);
	lv_obj_set_size(ui->RideInfo2_info3_label_3, 133, 94);

	//Write style for RideInfo2_info3_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info3_label_3, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info3_label_3, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info3_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info3_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info4_label_3
	ui->RideInfo2_info4_label_3 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info4_label_3, "46:28");
	lv_label_set_long_mode(ui->RideInfo2_info4_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info4_label_3, 960, 632);
	lv_obj_set_size(ui->RideInfo2_info4_label_3, 266, 94);

	//Write style for RideInfo2_info4_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info4_label_3, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info4_label_3, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info4_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info4_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info1_label_4
	ui->RideInfo2_info1_label_4 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info1_label_4, "kcal");
	lv_label_set_long_mode(ui->RideInfo2_info1_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info1_label_4, 762, 441);
	lv_obj_set_size(ui->RideInfo2_info1_label_4, 80, 94);

	//Write style for RideInfo2_info1_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info1_label_4, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info1_label_4, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info1_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info1_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info2_label_4
	ui->RideInfo2_info2_label_4 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info2_label_4, "BPM");
	lv_label_set_long_mode(ui->RideInfo2_info2_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info2_label_4, 1072, 441);
	lv_obj_set_size(ui->RideInfo2_info2_label_4, 133, 94);

	//Write style for RideInfo2_info2_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info2_label_4, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info2_label_4, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info2_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info2_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info3_label_4
	ui->RideInfo2_info3_label_4 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_info3_label_4, "RPM");
	lv_label_set_long_mode(ui->RideInfo2_info3_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_info3_label_4, 762, 647);
	lv_obj_set_size(ui->RideInfo2_info3_label_4, 85, 94);

	//Write style for RideInfo2_info3_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_info3_label_4, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_info3_label_4, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_info3_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_info3_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_info3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info_img_v
	ui->RideInfo2_info_img_v = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_info_img_v, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_info_img_v, &_info_h_alpha_560x8);
	lv_img_set_pivot(ui->RideInfo2_info_img_v, 0,0);
	lv_img_set_angle(ui->RideInfo2_info_img_v, 0);
	lv_obj_set_pos(ui->RideInfo2_info_img_v, 640, 500);
	lv_obj_set_size(ui->RideInfo2_info_img_v, 560, 8);

	//Write style for RideInfo2_info_img_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_info_img_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_info_img_h
	ui->RideInfo2_info_img_h = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_info_img_h, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_info_img_h, &_info_v_alpha_8x352);
	lv_img_set_pivot(ui->RideInfo2_info_img_h, 0,0);
	lv_img_set_angle(ui->RideInfo2_info_img_h, 0);
	lv_obj_set_pos(ui->RideInfo2_info_img_h, 912, 341);
	lv_obj_set_size(ui->RideInfo2_info_img_h, 8, 352);

	//Write style for RideInfo2_info_img_h, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_info_img_h, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_gauge_bg_img
	ui->RideInfo2_gauge_bg_img = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_gauge_bg_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_gauge_bg_img, &_ebike_gauge_bg_alpha_625x625);
	lv_img_set_pivot(ui->RideInfo2_gauge_bg_img, 0,0);
	lv_img_set_angle(ui->RideInfo2_gauge_bg_img, 0);
	lv_obj_set_pos(ui->RideInfo2_gauge_bg_img, 13, 100);
	lv_obj_set_size(ui->RideInfo2_gauge_bg_img, 625, 625);

	//Write style for RideInfo2_gauge_bg_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_gauge_bg_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_battery_line_img
	ui->RideInfo2_battery_line_img = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_battery_line_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_battery_line_img, &_ebike_gauge_battery_line_alpha_620x352);
	lv_img_set_pivot(ui->RideInfo2_battery_line_img, 0,0);
	lv_img_set_angle(ui->RideInfo2_battery_line_img, 0);
	lv_obj_set_pos(ui->RideInfo2_battery_line_img, 15, 395);
	lv_obj_set_size(ui->RideInfo2_battery_line_img, 620, 352);

	//Write style for RideInfo2_battery_line_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_battery_line_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_battery_icon
	ui->RideInfo2_battery_icon = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_battery_icon, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_battery_icon, &_ebike_gauge_battery_alpha_40x35);
	lv_img_set_pivot(ui->RideInfo2_battery_icon, 0,0);
	lv_img_set_angle(ui->RideInfo2_battery_icon, 0);
	lv_obj_set_pos(ui->RideInfo2_battery_icon, 293, 588);
	lv_obj_set_size(ui->RideInfo2_battery_icon, 40, 35);

	//Write style for RideInfo2_battery_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_battery_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_battery_label
	ui->RideInfo2_battery_label = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_battery_label, "56%");
	lv_label_set_long_mode(ui->RideInfo2_battery_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_battery_label, 346, 588);
	lv_obj_set_size(ui->RideInfo2_battery_label, 133, 94);

	//Write style for RideInfo2_battery_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_battery_label, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_battery_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_battery_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_battery_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_battery_arc
	ui->RideInfo2_battery_arc = lv_arc_create(ui->RideInfo2);
	lv_arc_set_mode(ui->RideInfo2_battery_arc, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->RideInfo2_battery_arc, 0, 100);
	lv_arc_set_bg_angles(ui->RideInfo2_battery_arc, 85, 130);
	lv_arc_set_value(ui->RideInfo2_battery_arc, 56);
	lv_arc_set_rotation(ui->RideInfo2_battery_arc, 0);
	lv_obj_set_pos(ui->RideInfo2_battery_arc, 60, 119);
	lv_obj_set_size(ui->RideInfo2_battery_arc, 533, 575);

	//Write style for RideInfo2_battery_arc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RideInfo2_battery_arc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RideInfo2_battery_arc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->RideInfo2_battery_arc, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->RideInfo2_battery_arc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->RideInfo2_battery_arc, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_battery_arc, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_battery_arc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_battery_arc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_battery_arc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_battery_arc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_battery_arc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RideInfo2_battery_arc, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->RideInfo2_battery_arc, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->RideInfo2_battery_arc, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->RideInfo2_battery_arc, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for RideInfo2_battery_arc, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RideInfo2_battery_arc, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->RideInfo2_battery_arc, 5, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes RideInfo2_footer_bg_img
	ui->RideInfo2_footer_bg_img = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_footer_bg_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_footer_bg_img, &_ebike_footer_bg_alpha_1280x102);
	lv_img_set_pivot(ui->RideInfo2_footer_bg_img, 0,0);
	lv_img_set_angle(ui->RideInfo2_footer_bg_img, 0);
	lv_obj_set_pos(ui->RideInfo2_footer_bg_img, 15, 697);
	lv_obj_set_size(ui->RideInfo2_footer_bg_img, 1280, 102);

	//Write style for RideInfo2_footer_bg_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_footer_bg_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_footer_line_1
	ui->RideInfo2_footer_line_1 = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_footer_line_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_footer_line_1, &_ebike_footer_line_2_alpha_58x11);
	lv_img_set_pivot(ui->RideInfo2_footer_line_1, 0,0);
	lv_img_set_angle(ui->RideInfo2_footer_line_1, 0);
	lv_obj_set_pos(ui->RideInfo2_footer_line_1, 506, 764);
	lv_obj_set_size(ui->RideInfo2_footer_line_1, 58, 11);

	//Write style for RideInfo2_footer_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_footer_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_footer_line_2
	ui->RideInfo2_footer_line_2 = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_footer_line_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_footer_line_2, &_ebike_footer_line_2_alpha_58x11);
	lv_img_set_pivot(ui->RideInfo2_footer_line_2, 0,0);
	lv_img_set_angle(ui->RideInfo2_footer_line_2, 0);
	lv_obj_set_pos(ui->RideInfo2_footer_line_2, 613, 764);
	lv_obj_set_size(ui->RideInfo2_footer_line_2, 58, 11);

	//Write style for RideInfo2_footer_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_footer_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_footer_line_3
	ui->RideInfo2_footer_line_3 = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_footer_line_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_footer_line_3, &_ebike_footer_line_1_alpha_58x11);
	lv_img_set_pivot(ui->RideInfo2_footer_line_3, 0,0);
	lv_img_set_angle(ui->RideInfo2_footer_line_3, 0);
	lv_obj_set_pos(ui->RideInfo2_footer_line_3, 720, 764);
	lv_obj_set_size(ui->RideInfo2_footer_line_3, 58, 11);

	//Write style for RideInfo2_footer_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_footer_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_watts_label_1
	ui->RideInfo2_watts_label_1 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_watts_label_1, "15.7");
	lv_label_set_long_mode(ui->RideInfo2_watts_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_watts_label_1, 266, 191);
	lv_obj_set_size(ui->RideInfo2_watts_label_1, 133, 117);

	//Write style for RideInfo2_watts_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_watts_label_1, lv_color_hex(0x0080ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_watts_label_1, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_watts_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_watts_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_watts_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_watts_label_2
	ui->RideInfo2_watts_label_2 = lv_label_create(ui->RideInfo2);
	lv_label_set_text(ui->RideInfo2_watts_label_2, "Watts");
	lv_label_set_long_mode(ui->RideInfo2_watts_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RideInfo2_watts_label_2, 266, 252);
	lv_obj_set_size(ui->RideInfo2_watts_label_2, 213, 94);

	//Write style for RideInfo2_watts_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RideInfo2_watts_label_2, lv_color_hex(0x9e9e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_watts_label_2, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_watts_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_watts_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_watts_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_watts_img
	ui->RideInfo2_watts_img = lv_img_create(ui->RideInfo2);
	lv_obj_add_flag(ui->RideInfo2_watts_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->RideInfo2_watts_img, &_watts_alpha_425x200);
	lv_img_set_pivot(ui->RideInfo2_watts_img, 0,0);
	lv_img_set_angle(ui->RideInfo2_watts_img, 0);
	lv_obj_set_pos(ui->RideInfo2_watts_img, 113, 292);
	lv_obj_set_size(ui->RideInfo2_watts_img, 425, 200);

	//Write style for RideInfo2_watts_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->RideInfo2_watts_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RideInfo2_cover_imgbtn
	ui->RideInfo2_cover_imgbtn = lv_imgbtn_create(ui->RideInfo2);
	ui->RideInfo2_cover_imgbtn_label = lv_label_create(ui->RideInfo2_cover_imgbtn);
	lv_label_set_text(ui->RideInfo2_cover_imgbtn_label, "");
	lv_label_set_long_mode(ui->RideInfo2_cover_imgbtn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->RideInfo2_cover_imgbtn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->RideInfo2_cover_imgbtn, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->RideInfo2_cover_imgbtn, 0, 0);
	lv_obj_set_size(ui->RideInfo2_cover_imgbtn, 1280, 800);

	//Write style for RideInfo2_cover_imgbtn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->RideInfo2_cover_imgbtn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RideInfo2_cover_imgbtn, &lv_font_simsun_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RideInfo2_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RideInfo2_cover_imgbtn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RideInfo2_cover_imgbtn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RideInfo2_cover_imgbtn, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->RideInfo2_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->RideInfo2_cover_imgbtn, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->RideInfo2_cover_imgbtn, &lv_font_simsun_42, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->RideInfo2_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->RideInfo2_cover_imgbtn, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for RideInfo2_cover_imgbtn, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->RideInfo2_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->RideInfo2_cover_imgbtn, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->RideInfo2_cover_imgbtn, &lv_font_simsun_42, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->RideInfo2_cover_imgbtn, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->RideInfo2_cover_imgbtn, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for RideInfo2_cover_imgbtn, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->RideInfo2_cover_imgbtn, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//The custom code of RideInfo2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->RideInfo2);

	//Init events for screen.
	events_init_RideInfo2(ui);
}
