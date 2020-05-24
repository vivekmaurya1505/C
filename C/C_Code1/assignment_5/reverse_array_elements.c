#include<stdio.h>
#define size1 5
void swap(int arr[],int size)
{	
	int j=0;
	for(int i=0;i<size/2;i++)
	{
		j++;
		arr[i]=arr[i]^arr[size-j];
		arr[size-j]=arr[i]^arr[size-j];
		arr[i]=arr[i]^arr[size-j];
	}
}
int main()
{
	int ar[size1];
	
	printf("Enter %d elements::",size1);
	
	for(int i=0;i<size1;i++)
	{
		scanf("%d",&ar[i]);
	}
	swap(ar,size1);
	
	printf("\n after swap\n");
	
	for(int i=0;i<size1;i++)
	{
		printf("%d",ar[i]);
	}

return 0;
}
