#include<reg51.h>
sbit rs=P1^0;									
sbit rw=P1^1;
sbit en=P1^2;


void lcdcmd(unsigned char);
void lcddat(unsigned char);
void delay();
void main()
{
	P2 = 0x00;
	while(1){
		lcdcmd(0x38);
		delay();
		lcdcmd(0x01);
		delay();
		lcdcmd(0x0c);
		delay();
		lcdcmd(0x06);
		delay();
		lcddat('H');
		delay();
		lcddat('E');
		delay();
		lcddat('L');
		delay();
		lcddat('L');
		delay();
		lcddat('O');
		delay();
		lcddat(' ');
		delay();
		lcddat('L');
		delay();
		lcddat('C');
		delay();
		lcddat('D');
		delay();
	}
}
void lcdcmd(unsigned char x)
{
	P2=x;
	rs=0;
	rw=0;
	en=1;
	delay();
	en=0;
}
void lcddat(unsigned char x)
{
	P2=x;
	rs=1;
	rw=0;
	en=1;
	delay();
	en=0;
}
void delay(unsigned int i)
{
	for(i=0;i<12000;i++);
}
	