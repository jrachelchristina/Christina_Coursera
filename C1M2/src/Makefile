include sources.mk

PLATFORM ?= HOST

LINKER_FILE = ../msp432p401r.lds
CPU = -mcpu=cortex-m4
ARCH = -mthumb -march=armv7e-m
SPECS = --specs=nosys.specs

ifeq ($(PLATFORM),HOST)
CC = gcc
LD = gcc
CFLAGS = -Wall -Werror -g -O0 -std=c99
CPPFLAGS = -DHOST
LDFLAGS =
else ifeq ($(PLATFORM),MSP432)
CC = arm-none-eabi-gcc
LD = arm-none-eabi-gcc
CFLAGS = -Wall -Werror -g -O0 -std=c99 $(CPU) $(ARCH) -mfloat-abi=hard -mfpu=fpv4-sp-d16
CPPFLAGS = -DMSP432
LDFLAGS = $(CPU) $(ARCH) -mfloat-abi=hard -mfpu=fpv4-sp-d16 $(SPECS) -T $(LINKER_FILE)
else
$(error Invalid PLATFORM. Use HOST or MSP432)
endif

INCLUDES = -I../include/common -I../include/msp432 -I../include/CMSIS

TARGET = c1m2.out
MAP_FILE = c1m2.map

OBJECTS = $(SOURCES:.c=.o)
DEPS = $(SOURCES:.c=.dep) 

