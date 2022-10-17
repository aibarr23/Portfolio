
#include <libopencm3/lm4f/gpio.h>

#include <stdbool.h>
#include <stdio.h>
#include "launchpad.h"




int main(void)
{
	lpInit();

	// printf("# NOTE\nThis is running on a Tiva-C LaunchPad TM4C123G\n");
	// printf("Welcome to my personal Calculator\nType functions for a list of functions\n this calculator can do.");


	// Ping out a message
	uprintf("%s\n\r", "Hello World!");


	while(true){
		schdExecute();
	}
	// return 0;
}
