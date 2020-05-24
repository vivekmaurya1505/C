#include <stdio.h>
int factoiral(int n); // fun decl
int main(void)
{
	int no, ans=0;
	printf("\n Enter No :: ");
	scanf("%d", &no);
	ans=factoiral(no); // fuction call
	printf("\n %d! =%d", no,ans );
	return 0;
}
int factoiral(int n) // fun defination
{
	int fact, counter;
	for(counter=fact=1; counter<=n; counter++)
	{
		fact*=counter;//fact= fact*counter;
	}
	return fact;
}
