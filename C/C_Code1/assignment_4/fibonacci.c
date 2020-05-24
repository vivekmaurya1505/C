#include<stdio.h>
int main()
{
	int n,a=0,b=1;
	printf("\n Enter any number for fibonacci number::");
	scanf("%d",&n);
	printf(" %d %d ",a,b);
	for(int i=1;i<=n/2;i++){
		a=a+b;
		b=a+b;
	
		printf(" %d %d ",a,b);
	}













return 0;
}
