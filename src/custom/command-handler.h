/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

#include <pthread.h>
#include <mqueue.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <sys/syscall.h>

#define WW_QUEUE_NAME "/wakeword_queue"
#define CMD_QUEUE_NAME "/command_queue"

#define MAX_SIZE 1024
#define QUEUE_PERMISSIONS 0664
#define MAX_MESSAGES 10
#define MAX_MSG_SIZE 256


class CommandHandler
{
	public:
		CommandHandler();
		~CommandHandler(){}
		int getWakeWord();
		int getCommand();

	private:
		mqd_t ww_mq;
		mqd_t cmd_mq;
};


