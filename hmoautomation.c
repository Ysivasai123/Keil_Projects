#include<reg51.h>
sbit load1 = P1^0;
sbit load2 = P1^1;
sbit load3 = P1^2;
sbit load4 = P1^3;

void main()
{
	unsigned char x;
	SCON = 0x50;
	TMOD = 0x20;
	TH1 = -3;
	TR1 = 1; 
	while(1){
		
		while(RI == 0);
		x = SBUF;
		SBUF = x;
		while(TI == 0);
		TI = 0;
		if(x == "1"){
			load1 = 1;
		}
		if(x == "2"){
			load1 = 0;
		}
		if(x == "3"){
			load2 = 1;
		}
		if(x == "4"){
			load2 = 0;
		}
		if(x == "5"){
			load3 = 1;
		}
		if(x == "6"){
			load3 = 0;
		}
		if(x == "7"){
			load4 = 1;
		}
		if(x == "8"){
			load4 = 0;
		}
	}
}	