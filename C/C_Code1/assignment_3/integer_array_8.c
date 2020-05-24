#include<stdio.h>
#define size 4
void swap(int,int ,int,int);
//oid swap(int a, int b,int arr[k],int arr[l])
//{



//}
int main()
{
	int arr[size]={0},sum=0;
printf("Enter an elements of array:\n");
for(int i=0;i<size;i++)
{
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);

}
for(int j=0;j<size;j++)
{
sum=sum+arr[j];
//printf("arr[%d]=%d\n",j,arr[j]);
}

printf("sum=%d,avg=%f",sum,(float)sum/size);

	for(int j=0;j<size;j++)
	{
		printf("\narr[%d]=%d\n",j,arr[j]);

	}
		
for(int l=0;l<size;l++)
{
	for(int k=0;k<size;k++)
	{
		if(arr[k]>arr[k+1])
		{
		
			arr[k]=arr[k]^arr[k+1];
			arr[k+1]=arr[k]^arr[k+1];
			arr[k]=arr[k]^arr[k+1];
		}

	}

}

	for(int j=0;j<size;j++)
	{
		printf("\narr[%d]=%d\n",j,arr[j]);

	}
		

	printf("minimum number is=%d\nmaximum number is =%d\n",arr[0],arr[size-1]);






return 0;
}
