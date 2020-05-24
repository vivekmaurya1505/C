#include<stdio.h>
//register int no=0; //error register variables can not be declared globaly should be declared locally
//int no4=no1; global variables are not allowed to initialize with local variables at the time of declaration
int no4=1000; //  allowed to initialize constants at time declaration
int no5; // default value of global variables is zero
int main(void)
{
	register int no=10; // we have to assign the value to register at the time of decl
	printf("\n no1= %d",no);

//	printf("\n Enter No :: ");
//	scanf("%d", &no); // we can not scanf register variable as we can not get addess of them

	int no1=10; //local variable
//	static int no2=no1; //static variables are not allowed to initialize with local variables at the time of declaration
//  printf("\n no2=%d [%u]", no2, &no2);

	static int no2=100; // allowed to initialize constants at time declaration
	printf("\n no2= %d [%u] ", no2, &no2);

	static int no3; // if we  don't initialize it use  default value  (0)

	printf("\n no3=%d [%u] static variable", no3, &no3);

	printf("\n no4=%d [%u] global variable ", no4, &no4);

	printf("\n no5=%d [%u] global variable ", no5, &no5);

	return 0;
}


