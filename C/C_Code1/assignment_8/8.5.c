#include<stdio.h>
long conv(const char s[])
{
	int c=0,x=1;
	long ret=0;
	while(*s!='\0')
	{	
		printf("%c",*s);
		s++;
		c++;
	}
	--s;
	for(int i=c;i>0;i--)
	{
		ret=(long)ret+(x*(*s-48));
		--s;
		x=x*10;
	}
	return ret;
}
void main()
{
	char no[]="12345";
	long num=conv(no);
	printf("\n THE NUMBER=%ld",num);
}
