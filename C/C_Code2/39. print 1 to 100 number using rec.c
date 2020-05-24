#include<stdio.h>
//int n=1;
static int n=1;
void fun();

int main(void)
{
	fun(); // fun call
	return 0;
}
void fun()
{
	//int n=1; local variable created per call
	//static int n=1;
	if(n>100)
		return;
	else
	{
		printf("%3d [%u]\n", n, &n);
		n++;
		fun();
	}

}
