#include "main.h"

void delay_ms(int _time_delay)
{
	unsigned char i,j;
	for(i =0;i<_time_delay;i++)
	{
		for(j=0;j<123;j++);
	}
}
unsigned char array_number_display[] = {
	0x0A, 0x7E, 0x8C, 0x2C, 0x78, 0x29, 0x09, 0x6E, 0x08, 0x28};

void main()
{
	unsigned char _array[4] = {0x7E, 0x8C, 0x2C, 0x78};
	while(1)
	{
		IC4094_Out(_array,4);

	}
}
