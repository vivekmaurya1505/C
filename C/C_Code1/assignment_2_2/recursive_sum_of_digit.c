#include<stdio.h>
int add_digit(int);
int add_digit(int n)
{
static	int sum=0;
	if(n/10==0)
	{	
		return n;
	}
	while(n>0)
	{

		sum=sum+n%10;
		n=n/10;
		if(n==0)
		{
		printf("\nsum od digit in a number");
			add_digit(sum);
		}

	}

}
int main()
{
int no;
printf("Enter a digit::");
scanf("%d",&no);
printf("\nsum od digit in a number=%d",add_digit(no));

return 0;
}
