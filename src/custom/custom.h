/*
 * Copyright 2024 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/*
 * custom.h
 *
 *  Created on: July 29, 2020
 *      Author: nxf53801
 */

#ifndef __CUSTOM_H_
#define __CUSTOM_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <mqueue.h>
#include "gui_guider.h"

void custom_init(lv_ui *ui);
void ebkie_init(void);
void set_gauge_val(void);
void gauge_update(void);
void screen_update(void);
void * guage_update_thread(void * data);
void * screen_update_thread(void * data);
void * cmd_processing_thread(void * data);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
