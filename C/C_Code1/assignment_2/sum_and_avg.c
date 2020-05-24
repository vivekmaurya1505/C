
#include"stdio.h"
int main()
{
	int sum=0,avg=0,no,a;
	printf("Enter how many  no you want to sum::");
	scanf("%d",&no);
	for(int i=0;i<no;i++)
	{
	scanf("%d",&a);
	sum=sum+a;
	}

	printf("\n sum=%d",sum);

	printf("\n sum=%f",(float)sum/no);


return 0;
}
