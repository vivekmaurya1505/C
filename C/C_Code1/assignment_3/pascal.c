#include<stdio.h>
int fact(int);
int fun(int,int);
int fact(int x)
{
int factorial;
if (x==0)
{
	return 1;
}
factorial=x*fact(x-1);
//printf("%d",factorial);
return factorial;
}

int fun(int i,int k)
{
	int z;
	int a=fact(i);
	int b=fact(k);
	int c=fact(i-k);
//	z=fact(i)/(fact(k)*fact(i-k));
	z=a/(b*c);
printf("(%d)",z);
	return z;
}
int main()
{

int n,space,i,j,k,x,z;
printf("Enter n number::");
scanf("%d",&n);
space=n;

for(i=0;i<n;i++)
{
	for(j=0;j<space;j++)
	{ printf("#");
	
	}
	for(k=0;k<=i;k++)
	{
		fun(i,k);
	

	}
	printf("\n");
		space --;
}

	return 0;


}
