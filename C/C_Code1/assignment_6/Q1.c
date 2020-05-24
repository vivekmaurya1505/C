#include<stdio.h>
int main()
{
	int x=0x44332211;
	char *ch;
	ch=&x;
	for(int i=0;i<4;i++)
	{
	printf("*ch===%p:x	 add=%u\n",*ch,ch);
	ch++;
	}
}
