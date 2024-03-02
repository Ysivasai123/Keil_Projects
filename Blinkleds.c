//Code for blinking of leds
#include<reg52.h>
void delay(unsigned int time);//to be declared for to use delay in the main loop
void main()
{
	while(1){
		P1 = 0xff;                //using port 1
		delay(1000);
		P1 = 0x00;
		delay(1000);
	}
	
}
void delay(unsigned int time){ //subroutine for delay
	unsigned int i;
	for(i = 0;i<time;i++){
		//for(j=0;j<255;j++);
	}
}