# Common includes in Makefile
#
# Copyright (C) 2007 Beihang University
# Written By Zhu Like ( zlike@cse.buaa.edu.cn )


CROSS_COMPILE :=  /opt/eldk-5.5.3/mips/sysroots/i686-eldk-linux/usr/bin/mips-linux/mips-linux-
CC			  := $(CROSS_COMPILE)gcc
CFLAGS		  := -O -G 0 -mno-abicalls -fno-builtin -Wa,-xgot -Wall -march=r3000 -mxgot
LD			  := $(CROSS_COMPILE)ld
