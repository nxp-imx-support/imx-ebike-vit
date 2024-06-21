/*
 * Copyright 2023 NXP 
 * SPDX-License-Identifier: BSD-3-Clause
*/

#include "command-handler.h"

CommandHandler::CommandHandler()
{
	struct mq_attr attr;

	attr.mq_flags = 0;
	attr.mq_maxmsg = MAX_MESSAGES;
	attr.mq_msgsize = MAX_MSG_SIZE;
	attr.mq_curmsgs =0;

	system("rm /dev/mqueue/wakeword_queue");
	system("rm /dev/mqueue/command_queue");
	sleep(0.1);

	ww_mq = mq_open(WW_QUEUE_NAME, O_RDONLY | O_CREAT , QUEUE_PERMISSIONS, &attr);
	if(ww_mq == -1) perror("mq_open from CommandHandler::CommandHandler()::WakeWord Queue\n");
	else printf("CommandHandler::CommandHandler()::WakeWord Queue: message queue successfully opened!\n");

	cmd_mq = mq_open(CMD_QUEUE_NAME, O_RDONLY | O_CREAT , QUEUE_PERMISSIONS, &attr);
	if(cmd_mq == -1) perror("mq_open from CommandHandler::CommandHandler()::Command Queue\n");
	else printf("CommandHandler::CommandHandler()::Command Queue: message queue successfully opened!\n");
}

int CommandHandler::getWakeWord(void)
{
    int bytes_read=0;
	char buffer[10];
	int id;

	    bytes_read = mq_receive(ww_mq, buffer, MAX_SIZE, 0);
		if(bytes_read == -1) perror("mq_receive from commandHandler.cpp\n");
	    if(bytes_read > 0)	id = std::stoi(buffer);
		else id = -1;
	
	return id;
}

int CommandHandler::getCommand(void)
{
    int bytes_read=0;
	char buffer[10];
	int id;

	    bytes_read = mq_receive(cmd_mq, buffer, MAX_SIZE, 0);
		if(bytes_read == -1) perror("mq_receive from commandHandler.cpp\n");
	    if(bytes_read > 0)	id = std::stoi(buffer);
		else id = -1;
	
	return id;
}

