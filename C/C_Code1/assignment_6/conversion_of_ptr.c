#include<stdio.h>
int main()
{
	int x=10;
	void *p=&x;
	printf("%d",*(int *) p);

	return 0;
}
