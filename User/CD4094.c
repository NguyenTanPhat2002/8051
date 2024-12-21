/********************************** (C) COPYRIGHT *******************************
* File name          : CD4094.c
* Author             : Oneled
* Version            : V1.0
* Date               : 20/12/2024
* Description        : CD4094 Shift Register Control Library
            - Implements data output to the CD4094 shift register
            - Controls data, clock, and strobe lines to manage data transmission
            - Supports dynamic data display via an array input

            NOTE: Ensure proper connection of CD4094 pins to microcontroller outputs
********************************************************************************/

#include "CD4094.h"

/*******************************************************************************
* Function Name       : IC4094_Out
* Description         : Outputs data to the CD4094 shift register
* Input Parameters    : unsigned char *array_show - Pointer to the array containing data to display
                        int _len - Length of the array
* Output              : None
* Return              : None
*******************************************************************************/
void IC4094_Out (unsigned char *array_show , int _len)
{
	unsigned char index_current_bit;   // Index for current bit being processed
	unsigned char _byte;               // Byte to be sent to the shift register
	signed char index_current_byte;    // Index for current byte in the array
	
	for(index_current_byte = 0; index_current_byte < _len; index_current_byte++)
	{
		IC4094_strobe = 0;  // Disable strobe before sending data
		_byte = *(array_show + _len - index_current_byte - 1); // Retrieve data from array in reverse order
		for(index_current_bit = 0; index_current_bit < 8; index_current_bit++)
		{
			
			IC4094_data = _byte & (0x80 >> index_current_bit); // Extract the current bit to send
			IC4094_clock = 0; // Set clock low to prepare for sending the bit
			IC4094_clock = 1; // Set clock high to latch the bit into the shift register
			
		}
	}
	IC4094_strobe = 1; // Enable strobe to output the data to the outputs
}

