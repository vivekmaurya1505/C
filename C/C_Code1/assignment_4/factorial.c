#include<stdio.h>
int main()
{

	int n,fact=1;
	printf("Enter n number::");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial=%d",fact);
return 0;
}
