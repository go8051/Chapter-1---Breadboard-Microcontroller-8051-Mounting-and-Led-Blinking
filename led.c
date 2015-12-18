//*******************************************************************
//www.go8051.com
//Chapter 2
//Breadboard Microcontroller 8051 Mounting and Led Blinking
//Created By go8051.com
// Open source
//email : 8051blog@gmail.com
//*******************************************************************

#include<reg51.h>		// Header file for 8051 microcontroller
sbit led = P1^0;		// defining Port 1.0 and naming it as led
void delay();		   // function prototype for delay function( this function will be used to provide a delay in between blinking led)
void main()			  // start of main function
{
	led=0;			 // configure led pin as output 0-output & 1-input
	while(1)		 // infinite loop
	{
		led=1;		 // turn off led by giving logic 1 (that means +5v) which will turn off the led
		delay();   		// stop or give a 1 sec delay so it can be visible
		led=0;		 // turn on led by giving logic 0 (that means 0v) which will turn on the led
		delay();	 	// stop or give a 1 sec delay so it can be visible
	}
}

 // this delay function will provide a delay of 1.5 secs approximately
void delay()			  // function definition of delay function
{
	int i,j;			  // declaring variable i and j
	for(i=0;i<=1275;i++)	  // first for loop which will loop 1275 times
		for(j=0;j<=1;j++);	  // second loop which will loop for 2 times
}
