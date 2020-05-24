#include<stdio.h>
int main()
{
	int x=10;
	void *p=&a;
	printf("value of p=%u",p);
	printf("p+1=%u",p+5);
	printf("value of p=%u",*p);

	printf("p+1=%u",p/5);
	return 0;

}
