
#include<stdio.h>
int main()
{
int i,j,n,space;
printf("Enter n number::");
scanf("%d",&n);
space=n-1;
for(i=1;i<=n;i++)
{
	for(j=1;j<=space;j++)
	{
		printf(" ");}

		for(j=1;j<=i;j++)
		{	printf("%d",i);}

		

		printf("\n");
		space--;

	
	
}

return 0;
}



