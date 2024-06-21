/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *Overview;
	bool Overview_del;
	lv_obj_t *Overview_bg_img;
	lv_obj_t *Overview_hdr_img;
	lv_obj_t *Overview_date_label;
	lv_obj_t *Overview_time_label;
	lv_obj_t *Overview_sub_label;
	lv_obj_t *Overview_gps_icon;
	lv_obj_t *Overview_travelled_icon;
	lv_obj_t *Overview_speed_icon;
	lv_obj_t *Overview_remaining_icon;
	lv_obj_t *Overview_elapsed_icon;
	lv_obj_t *Overview_dist_label;
	lv_obj_t *Overview_dir_label;
	lv_obj_t *Overview_str_label;
	lv_obj_t *Overview_info1_label_1;
	lv_obj_t *Overview_info1_label_2;
	lv_obj_t *Overview_info2_label_1;
	lv_obj_t *Overview_info2_label_2;
	lv_obj_t *Overview_info3_label_1;
	lv_obj_t *Overview_info3_label_2;
	lv_obj_t *Overview_linfo4_label_1;
	lv_obj_t *Overview_linfo4_label_2;
	lv_obj_t *Overview_info1_label_3;
	lv_obj_t *Overview_info2_label_3;
	lv_obj_t *Overview_info3_label_3;
	lv_obj_t *Overview_info4_label_3;
	lv_obj_t *Overview_info1_label_4;
	lv_obj_t *Overview_info2_label_4;
	lv_obj_t *Overview_info3_label_4;
	lv_obj_t *Overview_info_img_v;
	lv_obj_t *Overview_info_img_h;
	lv_obj_t *Overview_gauge_bg_img;
	lv_obj_t *Overview_gaugeL_img;
	lv_obj_t *Overview_gaugeN_img;
	lv_obj_t *Overview_needle_img;
	lv_obj_t *Overview_battery_line_img;
	lv_obj_t *Overview_battery_icon;
	lv_obj_t *Overview_battery_label;
	lv_obj_t *Overview_battery_arc;
	lv_obj_t *Overview_footer_bg_img;
	lv_obj_t *Overview_footer_line_1;
	lv_obj_t *Overview_footer_line_2;
	lv_obj_t *Overview_footer_line_3;
	lv_obj_t *Overview_gauge_label_1;
	lv_obj_t *Overview_gauge_label_2;
	lv_obj_t *Overview_cover_imgbtn;
	lv_obj_t *Overview_cover_imgbtn_label;
	lv_obj_t *RideInfo1;
	bool RideInfo1_del;
	lv_obj_t *RideInfo1_bg_img;
	lv_obj_t *RideInfo1_hdr_img;
	lv_obj_t *RideInfo1_date_label;
	lv_obj_t *RideInfo1_time_label;
	lv_obj_t *RideInfo1_sub_label;
	lv_obj_t *RideInfo1_gain_img;
	lv_obj_t *RideInfo1_lost_img;
	lv_obj_t *RideInfo1_info1_label_1;
	lv_obj_t *RideInfo1_info2_label_1;
	lv_obj_t *RideInfo1_info3_label_1;
	lv_obj_t *RideInfo1_info3_label_2;
	lv_obj_t *RideInfo1_linfo4_label_1;
	lv_obj_t *RideInfo1_linfo4_label_2;
	lv_obj_t *RideInfo1_info1_label_3;
	lv_obj_t *RideInfo1_info2_label_3;
	lv_obj_t *RideInfo1_info3_label_3;
	lv_obj_t *RideInfo1_info4_label_3;
	lv_obj_t *RideInfo1_info1_label_2;
	lv_obj_t *RideInfo1_info3_label_4;
	lv_obj_t *RideInfo1_info2_label_2;
	lv_obj_t *RideInfo1_info4_label_4;
	lv_obj_t *RideInfo1_info_img_v;
	lv_obj_t *RideInfo1_info_img_h;
	lv_obj_t *RideInfo1_img_1;
	lv_obj_t *RideInfo1_footer_bg_img;
	lv_obj_t *RideInfo1_footer_line_1;
	lv_obj_t *RideInfo1_footer_line_2;
	lv_obj_t *RideInfo1_footer_line_3;
	lv_obj_t *RideInfo1_dis_img;
	lv_obj_t *RideInfo1_ava_img;
	lv_obj_t *RideInfo1_ride_chart;
	lv_chart_series_t *RideInfo1_ride_chart_0;
	lv_obj_t *RideInfo1_elev_label_0;
	lv_obj_t *RideInfo1_elev_label_1;
	lv_obj_t *RideInfo1_elev_label_2;
	lv_obj_t *RideInfo1_elev_label_3;
	lv_obj_t *RideInfo1_elev_label_4;
	lv_obj_t *RideInfo1_elev_label_5;
	lv_obj_t *RideInfo1_elev_label_6;
	lv_obj_t *RideInfo1_elev_label_7;
	lv_obj_t *RideInfo1_elev_label_8;
	lv_obj_t *RideInfo1_elev_label_9;
	lv_obj_t *RideInfo1_elev_label_10;
	lv_obj_t *RideInfo1_elev_label_11;
	lv_obj_t *RideInfo1_elev_label_12;
	lv_obj_t *RideInfo1_elev_label_13;
	lv_obj_t *RideInfo1_elev_label_14;
	lv_obj_t *RideInfo1_elev_label_15;
	lv_obj_t *RideInfo1_cover_imgbtn;
	lv_obj_t *RideInfo1_cover_imgbtn_label;
	lv_obj_t *RideInfo2;
	bool RideInfo2_del;
	lv_obj_t *RideInfo2_bg_img;
	lv_obj_t *RideInfo2_hdr_img;
	lv_obj_t *RideInfo2_date_label;
	lv_obj_t *RideInfo2_time_label;
	lv_obj_t *RideInfo2_sub_label;
	lv_obj_t *RideInfo2_gps_icon;
	lv_obj_t *RideInfo2_calories_icon;
	lv_obj_t *RideInfo2_hr_icon;
	lv_obj_t *RideInfo2_cadence_icon;
	lv_obj_t *RideInfo2_elapsed_icon;
	lv_obj_t *RideInfo2_dist_label;
	lv_obj_t *RideInfo2_dir_label;
	lv_obj_t *RideInfo2_str_label;
	lv_obj_t *RideInfo2_info1_label_1;
	lv_obj_t *RideInfo2_info1_label_2;
	lv_obj_t *RideInfo2_info2_label_1;
	lv_obj_t *RideInfo2_info2_label_2;
	lv_obj_t *RideInfo2_info3_label_1;
	lv_obj_t *RideInfo2_linfo4_label_1;
	lv_obj_t *RideInfo2_linfo4_label_2;
	lv_obj_t *RideInfo2_info1_label_3;
	lv_obj_t *RideInfo2_info2_label_3;
	lv_obj_t *RideInfo2_info3_label_3;
	lv_obj_t *RideInfo2_info4_label_3;
	lv_obj_t *RideInfo2_info1_label_4;
	lv_obj_t *RideInfo2_info2_label_4;
	lv_obj_t *RideInfo2_info3_label_4;
	lv_obj_t *RideInfo2_info_img_v;
	lv_obj_t *RideInfo2_info_img_h;
	lv_obj_t *RideInfo2_gauge_bg_img;
	lv_obj_t *RideInfo2_battery_line_img;
	lv_obj_t *RideInfo2_battery_icon;
	lv_obj_t *RideInfo2_battery_label;
	lv_obj_t *RideInfo2_battery_arc;
	lv_obj_t *RideInfo2_footer_bg_img;
	lv_obj_t *RideInfo2_footer_line_1;
	lv_obj_t *RideInfo2_footer_line_2;
	lv_obj_t *RideInfo2_footer_line_3;
	lv_obj_t *RideInfo2_watts_label_1;
	lv_obj_t *RideInfo2_watts_label_2;
	lv_obj_t *RideInfo2_watts_img;
	lv_obj_t *RideInfo2_cover_imgbtn;
	lv_obj_t *RideInfo2_cover_imgbtn_label;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_move_animation(void * var, int32_t duration, int32_t delay, int32_t x_end, int32_t y_end, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_scale_animation(void * var, int32_t duration, int32_t delay, int32_t width, int32_t height, lv_anim_path_cb_t path_cb,
                        uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                        lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_zoom_animation(void * var, int32_t duration, int32_t delay, int32_t zoom, lv_anim_path_cb_t path_cb,
                           uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                           lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_rotate_animation(void * var, int32_t duration, int32_t delay, lv_coord_t x, lv_coord_t y, int32_t rotate,
                   lv_anim_path_cb_t path_cb, uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time,
                   uint32_t playback_delay, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;

void setup_scr_Overview(lv_ui *ui);
void setup_scr_RideInfo1(lv_ui *ui);
void setup_scr_RideInfo2(lv_ui *ui);
LV_IMG_DECLARE(_bg1_alpha_1280x800);
LV_IMG_DECLARE(_ebike_header_bg_alpha_1280x150);
LV_IMG_DECLARE(_ebike_gps_arrow_1_alpha_74x141);
LV_IMG_DECLARE(_ebike_icn_distance_travelled_alpha_56x41);
LV_IMG_DECLARE(_ebike_icn_average_speed_alpha_61x50);
LV_IMG_DECLARE(_ebike_icn_remaining_distance_alpha_53x58);
LV_IMG_DECLARE(_ebike_icn_elapsed_time_2_alpha_53x73);
LV_IMG_DECLARE(_info_h_alpha_560x8);
LV_IMG_DECLARE(_info_v_alpha_8x352);
LV_IMG_DECLARE(_ebike_gauge_bg_alpha_625x625);
LV_IMG_DECLARE(_ebike_gauge_lines_alpha_514x470);
LV_IMG_DECLARE(_ebike_gauge_numbers_alpha_442x380);
LV_IMG_DECLARE(_ebike_gauge_needle_alpha_440x440);
LV_IMG_DECLARE(_ebike_gauge_battery_line_alpha_620x352);
LV_IMG_DECLARE(_ebike_gauge_battery_alpha_40x35);
LV_IMG_DECLARE(_ebike_footer_bg_alpha_1280x102);
LV_IMG_DECLARE(_ebike_footer_line_1_alpha_58x11);
LV_IMG_DECLARE(_ebike_footer_line_2_alpha_58x11);
LV_IMG_DECLARE(_ebike_footer_line_2_alpha_58x11);
LV_IMG_DECLARE(_bg1_alpha_1280x800);
LV_IMG_DECLARE(_ebike_header_bg_alpha_1280x150);
LV_IMG_DECLARE(_ebike_icn_elevation_gained_alpha_58x52);
LV_IMG_DECLARE(_ebike_icn_elevation_lost_alpha_56x52);
LV_IMG_DECLARE(_info_h_alpha_560x8);
LV_IMG_DECLARE(_info_v_alpha_8x176);
LV_IMG_DECLARE(_info_h_alpha_560x8);
LV_IMG_DECLARE(_ebike_footer_bg_alpha_1280x102);
LV_IMG_DECLARE(_ebike_footer_line_2_alpha_58x11);
LV_IMG_DECLARE(_ebike_footer_line_1_alpha_58x11);
LV_IMG_DECLARE(_ebike_footer_line_2_alpha_58x11);
LV_IMG_DECLARE(_ebike_icn_distance_travelled_big_alpha_112x82);
LV_IMG_DECLARE(_ebike_icn_average_speed_big_alpha_106x91);
LV_IMG_DECLARE(_bg1_alpha_1280x800);
LV_IMG_DECLARE(_ebike_header_bg_alpha_1280x150);
LV_IMG_DECLARE(_ebike_gps_arrow_1_alpha_74x141);
LV_IMG_DECLARE(_ebike_icn_calories_burned_alpha_56x41);
LV_IMG_DECLARE(_ebike_icn_heart_rate_alpha_61x50);
LV_IMG_DECLARE(_ebike_icn_round_per_minute_alpha_53x58);
LV_IMG_DECLARE(_ebike_icn_elapsed_time_2_alpha_53x73);
LV_IMG_DECLARE(_info_h_alpha_560x8);
LV_IMG_DECLARE(_info_v_alpha_8x352);
LV_IMG_DECLARE(_ebike_gauge_bg_alpha_625x625);
LV_IMG_DECLARE(_ebike_gauge_battery_line_alpha_620x352);
LV_IMG_DECLARE(_ebike_gauge_battery_alpha_40x35);
LV_IMG_DECLARE(_ebike_footer_bg_alpha_1280x102);
LV_IMG_DECLARE(_ebike_footer_line_2_alpha_58x11);
LV_IMG_DECLARE(_ebike_footer_line_2_alpha_58x11);
LV_IMG_DECLARE(_ebike_footer_line_1_alpha_58x11);
LV_IMG_DECLARE(_watts_alpha_425x200);

LV_FONT_DECLARE(lv_font_montserratMedium_32)
LV_FONT_DECLARE(lv_font_simsun_32)
LV_FONT_DECLARE(lv_font_montserratMedium_53)
LV_FONT_DECLARE(lv_font_simsun_53)
LV_FONT_DECLARE(lv_font_montserratMedium_74)
LV_FONT_DECLARE(lv_font_simsun_74)
LV_FONT_DECLARE(lv_font_montserratMedium_112)
LV_FONT_DECLARE(lv_font_simsun_112)
LV_FONT_DECLARE(lv_font_simsun_42)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_montserratMedium_42)


#ifdef __cplusplus
}
#endif
#endif
