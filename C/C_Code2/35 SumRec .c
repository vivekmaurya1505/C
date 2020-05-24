#include<stdio.h>
int sum(int no);
int main(void)
{
	int n=5,ans=0;
	ans= sum(n);
	printf("\n ans =%d ", ans);
	return 0;
}
int sum(int no)
{
	int add=0;
	printf("\n no=%d [%u]", no, &no);
	//getchar();

	if(no==1)
	{
		printf("\nno=%d [%u] add=1", no, &no );
		return 1;
	}
	else
	{
		add= no + sum(no--);
		printf("\nno=%d [%u] add=%d [%u]", no, &no , add, &add);
		return add;
	}
}


