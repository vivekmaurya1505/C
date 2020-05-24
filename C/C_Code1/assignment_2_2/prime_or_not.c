#include<stdio.h>
int main()
{
	int no,a=0;
printf("\nEnter any digit::");
scanf("%d",&no);
for(int i=1;i<=no;i++)
{
	if(no%i==0)
	{
		a++;
	}
}

	if(a>2)
	{
	printf("\n%d is not a prime number",no);

	}
	else
	{
	printf("%d is a prime number",no);
	}

return 0;
}
