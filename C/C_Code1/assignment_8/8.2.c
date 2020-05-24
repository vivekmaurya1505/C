#include<stdio.h>
#include<string.h>
void main()
{
	char p1[10]="operation";
	char p2[15]="concatenation";
	char p3[25];
	sprintf(p3,"%s %s",p1,p2);
	puts(p3);
	char p4[10];
	char p5[10]="op copy";
	sprintf(p4,"%s ",p5);
	puts(p4);
	int len;
	len=sprintf(p2,"%s",p2);
	printf("\n LENGTH=%d ",len);
}
