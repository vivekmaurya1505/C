#include <stdio.h>
int main( void )
{
	int a=10;
	char ch='A';
	void *ptr=NULL;
	float pi=3.142;
	ptr= &a;

	//printf("\n ptr=%d", *ptr); // error
	printf("\n ptr=%d", *(int*)ptr); // allowed after type casting

	ptr=&ch;
	//printf("\n ptr=%d", *ptr); // error
	printf("\n ptr=%c", *(char*)ptr); // allowed after type casting

	ptr=&pi;
	//printf("\n ptr=%f", *ptr); // error
	printf("\n ptr=%f", *(float*)ptr); // allowed after type casting

	printf("\n ptr=%u", ptr);
	ptr++; // error
	printf("\n ptr=%u", ptr);
	return 0;
}
