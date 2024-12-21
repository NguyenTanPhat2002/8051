#ifndef _MAIN_H_
#define _MAIN_H_

#include <REGX52.H>
#include "CD4094.h"

#define FREQ_OSC 12000000ul
/****************Declare GPIO for IC4094******************/
sbit IC4094_data 		= P2^3;
sbit IC4094_clock 	= P2^4;
sbit IC4094_strobe 	= P2^5;


#endif