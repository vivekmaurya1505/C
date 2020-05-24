#include<stdio.h>
//int n=1;
//static int n=1;

int main(void)
{
	//int n=1; local variable created per fun call
	static int n=1;
	if(n>10)
		return 0;
	else
	{
		printf("%3d [%u]\n", n, &n);
		n++;
		main();
	}
	return 0;
}
