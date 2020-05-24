#include<stdio.h>
int main()
{
int n1,n2,sum=0,amstrong_no;
printf("\nEnter any amstrong number::");
scanf("%d",&n1);
amstrong_no=n1;
	while(n1!=0)
	{
	n2=n1%10;
	sum=sum+n2*n2*n2;
	n1=n1/10;

	}
	if(sum==amstrong_no)
	{
	printf("\n%d is a amstrong number",sum);

	}
	else
	{
	printf("\n%d is a not a amstrong number",amstrong_no);
	}


return 0;
}
