#include<stdio.h>
int main()
{
	int a,b,c;
printf("Enter any three number::");
scanf("%d%d%d",&a,&b,&c);
int big =(a>b)?(a>c)?a:c:(b>c)?b:c;
printf("Bigger number is=%d",big);
return 0;
}
