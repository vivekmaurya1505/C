#include<stdio.h>
int fact(int);
int fact(int x)
{
int factorial;
if (x==0)
{
	return 1;
}
factorial=x*fact(x-1);
return factorial;
}
int main()
{

int f=0;
printf("Enter n number::");
scanf("%d",&f);
printf("factorial=%d",fact(f));




return 0;
}
