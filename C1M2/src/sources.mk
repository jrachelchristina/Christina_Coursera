ifeq ($(PLATFORM),HOST)
SOURCES = main.c memory.c
INCLUDES = -I../include/common
else ifeq ($(PLATFORM),MSP432)
SOURCES = main.c memory.c interrupts_msp432p401r_gcc.c startup_msp432p401r_gcc.c system_msp432p401r.c
INCLUDES = -I../include/common -I../include/msp432 -I../include/CMSIS
endif
