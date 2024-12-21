/********************************** (C) COPYRIGHT *******************************
* File name          : CD4094.h
* Author             : Oneled
* Version            : V1.0
* Date               : 20/12/2024
* Description        : CD4094 Shift Register Header File
            - Provides function prototypes for controlling the CD4094 shift register
            - Defines interface for data output to the shift register

            NOTE: Ensure proper inclusion in source files for CD4094 operations
********************************************************************************/

#ifndef _CD4094_H_
#define _CD4094_H_

#include "main.h"

/*******************************************************************************
* Function Name       : IC4094_Out
* Description         : Outputs data to the CD4094 shift register
* Input Parameters    : unsigned char *array_show - Pointer to the array containing data to display
                        int _len - Length of the array
* Output              : None
* Return              : None
*******************************************************************************/
void IC4094_Out (unsigned char *array_show , int _len);

#endif

