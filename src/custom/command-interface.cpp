/*
 * Copyright 2023-2024 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

#include "command-interface.h"

using namespace std;

void* commandInterfaceThread(void* args);

void startCommandInterface(void)
{	
	pthread_t thread;

	pthread_create(&thread, NULL, &commandInterfaceThread, NULL);
}


void* commandInterfaceThread(void* args)
{
	lv_obj_t * act_scr;
	CommandHandler handler;
	int ww_id, cmd_id;
	char* command;

	printf("Command Interface Thread Created!\n");

	for(;;)
	{
		ww_id = handler.getWakeWord();
		printf("Wakeword arrived!! Id= %d \n\n", ww_id);

		cmd_id = handler.getCommand();
		printf("Command arrived!! Id= %d \n\n", cmd_id);

		if(cmd_id == 0)
		{
			printf("Unknown Command!!\n");
			continue;
		}
		else if(cmd_id == 1)
			command = "NEXT PAGE";
		else if(cmd_id == 2)
			command = "LAST PAGE";

		act_scr = lv_scr_act();
		lv_disp_t * d = lv_obj_get_disp(act_scr);
		if(d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			if(strstr(command, "NEXT PAGE") != NULL) {
				if(act_scr == guider_ui.Overview) {
					if(guider_ui.RideInfo1_del == true)
						setup_scr_RideInfo1(&guider_ui);
					lv_scr_load_anim(guider_ui.RideInfo1, LV_SCR_LOAD_ANIM_MOVE_LEFT, 1, 0, false);
					guider_ui.Overview_del = false;
				}

				if(act_scr == guider_ui.RideInfo1) {
					if(guider_ui.RideInfo2_del == true)
						setup_scr_RideInfo2(&guider_ui);
					lv_scr_load_anim(guider_ui.RideInfo2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 1, 0, false);
					guider_ui.RideInfo1_del = false;
				}

				if(act_scr == guider_ui.RideInfo2) {
					if(guider_ui.Overview_del == true)
						setup_scr_Overview(&guider_ui);
					lv_scr_load_anim(guider_ui.Overview, LV_SCR_LOAD_ANIM_MOVE_LEFT, 1, 0, false);
					guider_ui.RideInfo2_del = false;
				}
			}

			if(strstr(command, "LAST PAGE") != NULL) {
				if(act_scr == guider_ui.Overview) {
					if(guider_ui.RideInfo2_del == true)
						setup_scr_RideInfo2(&guider_ui);
					lv_scr_load_anim(guider_ui.RideInfo2, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 1, 0, false);
					guider_ui.Overview_del = false;
				}

				if(act_scr == guider_ui.RideInfo1) {
					if(guider_ui.Overview_del == true)
						setup_scr_Overview(&guider_ui);
					lv_scr_load_anim(guider_ui.Overview, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 1, 0, false);
					guider_ui.RideInfo1_del = false;
				}

				if(act_scr == guider_ui.RideInfo2) {
					if(guider_ui.RideInfo1_del == true)
						setup_scr_RideInfo1(&guider_ui);
					lv_scr_load_anim(guider_ui.RideInfo1, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 1, 0, false);
					guider_ui.RideInfo2_del = false;
				}
			}
		}
	}
}

