#include<stdio.h>
int main()
{
	int x=0x44332211;
	char *ch;
	ch=&x;
	
	*ch=*ch^*(ch+3);
	*(ch+3)=*ch^*(ch+3);
	*ch=*ch^*(ch+3);

	*(ch+1)=*(ch+1)^*(ch+2);
	*(ch+2)=*(ch+1)^*(ch+2);
	*(ch+1)=*(ch+1)^*(ch+2);

	for(int i=0;i<4;i++){

		printf("*ch==%x\tch=%u\n",*ch,ch);
		ch++;
	}
}
