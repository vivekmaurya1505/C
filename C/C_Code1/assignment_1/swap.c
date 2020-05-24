#include<stdio.h>
int main()
{
	int a,b,c;
	a=5;b=3;c=0;
	printf("before swapping a=%d and b=%d\n",a,b);
	//c=a;
	//a=b;
	//b=c;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d and b=%d",a,b);
	return 0;
	
	
}
