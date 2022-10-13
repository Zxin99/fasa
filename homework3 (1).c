#include <stdio.h>
#include <pigpio.h>

#define LED 13

int main(void)
{
	gpioInitialise();
	gpioSetMode(LED, PI_OUTPUT);
	
	for(i=0;i<10;i++)
	{
		gpioWrite(LED,1);
		gpioDelay(500000);
		gpioWrite(LED,0);
		gpioDelay(500000);
	 } 
	 return 0;
 } 
