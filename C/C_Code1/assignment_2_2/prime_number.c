#include<stdio.h>
int main()
{
	int no,a=0;
printf("\nEnter any digit::");
scanf("%d",&no);
for(int j=1;j<=no;j++)
{
	a=0;
for(int i=1;i<=j;i++)
{
	if(j%i==0)
	{
		a++;
	}

}
	if(a==2)
	{
	printf("\n%d is a prime number",j);

	}
	
	
	
	

}
return 0;
}
