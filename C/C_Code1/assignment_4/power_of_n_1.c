#include<stdio.h>

int power(int int);
int power(int b,int i)
{
	int ans;
	while(i>=1)
	{
		int ans;
			b*power(b,--i)
			return ans;
	}
}
int main()
{
	int b,i,power=1;
printf("Enter base and index::::");
scanf("%d%d",&b,&i);
//for(int j=0;j<i;j++)
//{
//	power=power*b;

//}

//printf("\n %d raise to %d is=%d ",b,i,power);
 

int k=power(b,i);

printf("%d",k);


return 0;
}
