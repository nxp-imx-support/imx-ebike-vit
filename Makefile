# Copyright 2024 NXP
# NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
# accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
# activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
# comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
# terms, then you may not retain, install, activate or otherwise use the software.

#
# Makefile
#

CC ?= gcc
LVGL_DIR_NAME = lvgl
LVGL_DIR = ${shell pwd}
CPPFLAGS = -I$(LVGL_DIR)/ -I$(LVGL_DIR)/$(LVGL_DIR_NAME) -I$(LVGL_DIR)/lvgl/src -I$(INC_DIR_SRC)/ -I$(INC_DIR_GENERATED)/ -I$(INC_DIR_CUSTOM) -g3 -ggdb -O0
CFLAGS = -O3 -g3 -ggdb -I$(LVGL_DIR)/ -I$(INC_DIR_SRC)/ -I$(INC_DIR_GENERATED)/ -I$(LVGL_DIR)/$(LVGL_DIR_NAME) -I$(INC_DIR_CUSTOM) -Wall -Wshadow -Wundef -Wmissing-prototypes -Wno-discarded-qualifiers -Wall -Wextra -Wno-unused-function -Wno-error=strict-prototypes -Wpointer-arith -fno-strict-aliasing -Wno-error=cpp -Wuninitialized -Wmaybe-uninitialized -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wno-cast-qual -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wformat-security -Wno-ignored-qualifiers -Wno-error=pedantic -Wno-sign-compare -Wno-error=missing-prototypes -Wdouble-promotion -Wclobbered -Wdeprecated -Wempty-body -Wtype-limits -Wshift-negative-value -Wstack-usage=2048 -Wno-unused-value -Wno-unused-parameter -Wno-missing-field-initializers -Wuninitialized -Wmaybe-uninitialized -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wpointer-arith -Wno-cast-qual -Wmissing-prototypes -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wno-discarded-qualifiers -Wformat-security -Wno-ignored-qualifiers -Wno-sign-compare
LDFLAGS = -lm -lwayland-client -lxkbcommon -lwayland-cursor -lrt -Llv_drivers/wayland/protocols/libdf-wayland-xdg-application-stable-latest

#BIN = $(BIN_DIR)/demo
BIN_DIR = ./bin
OBJ_DIR = ./obj
PRJ_DIR = ${shell pwd}/src
INC_DIR_SRC = ./src
INC_DIR_GENERATED = ./src/generated
INC_DIR_CUSTOM = ./src/custom

BIN = ebike-vit-gui

#Collect the files to compile
#MAINSRC = ./main.c

include $(LVGL_DIR)/lvgl/lvgl.mk
include $(LVGL_DIR)/lv_drivers/lv_drivers.mk

include $(LVGL_DIR)/src/src.mk
include $(LVGL_DIR)/src/generated/generated.mk
include $(LVGL_DIR)/src/custom/custom.mk

#CSRCS +=$(LVGL_DIR)/src/*.c

OBJEXT ?= .o

AOBJS = $(ASRCS:.S=$(OBJEXT))
COBJS = $(CSRCS:.c=$(OBJEXT))

MAINOBJ = $(MAINSRC:.c=$(OBJEXT))

SRCS = $(ASRCS) $(CSRCS) $(MAINSRC)
OBJS = $(AOBJS) $(COBJS)

## MAINOBJ -> OBJFILES

.PHONY: all
all: default

%.o: %.c
	@$(CC)  $(CFLAGS) -c $< -o $@
	@echo "CC $<"
#@mkdir obj_files
#@mv $(OBJS) ./obj_files/
command-interface.o: src/custom/command-interface.cpp 
	$(CXX) $(CPPFLAGS) -c -g $< -o $@
command-handler.o: src/custom/command-handler.cpp
	$(CXX) $(CPPFLAGS) -c -g $< -o $@

main.o: main.cpp
	$(CXX) $(CPPFLAGS) -c -g $< -o $@

.PHONY: default
default: $(AOBJS) $(COBJS) main.o command-interface.o command-handler.o
	$(CXX) -o $(BIN) main.o $(AOBJS) $(COBJS) command-interface.o command-handler.o $(LDFLAGS)
	
	mkdir ebike-vit-deploy
	cp -r misc/conf/ misc/scripts/* ebike-vit-deploy/
	mv ebike-vit-gui ebike-vit-deploy/
	
	@mkdir -p obj_files
	@mv *.o ./obj_files/
	
.PHONY: clean
clean: 
	rm -rf $(BIN) $(AOBJS) $(COBJS) obj_files/ ebike-vit-deploy/
