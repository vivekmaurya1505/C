#include<stdio.h>
int fib(int);
int fib(int n)
{
if(n==1 || n==0)
{
	return 0;
}
if(n==2)
{
return 1;
}

//a=(fib(n-1)+fib(n-2));
//printf("%d",a);
return(fib(n-1)+fib(n-2));
}
int main()
{

int n;
printf("\n Enter any number for fibonacci number::");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("\t%d",fib(i));
}














return 0;
}
