

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

		for(j=1;j<=2*i-1;j++)
		{	printf("%d",i);}

		printf("\n");
		space--;

	
}
       i=i-2;
	space=1;
	for(int k=i;k>1;k--)
{
	for(int m=1;m<=space;m++)
	{
		printf(" ");
	}
	for(int p=i;p<=2*k-1;p--)
	{
		printf("%d",k);
		printf("\n");
	}
	space++;
}

return 0;
}



