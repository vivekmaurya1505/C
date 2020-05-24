#include<stdio.h>
int no1=10; // defination of global variable
int main(void)
{
	{
		// in block1
		int no1=100; // decl and defination is same for local variable
		printf("\n no=%d [%u] local variable from block 1", no1, &no1);
	}
	{
		// in block2
		int no1=200;
		printf("\n no=%d [%u] local variable from block 2", no1, &no1);
	}

	printf("\n no=%d [%u] global variable", no1, &no1);
	return 0;
}
//extern int no1; // decl of global variable

