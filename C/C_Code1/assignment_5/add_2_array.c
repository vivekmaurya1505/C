#include<stdio.h>
#define size 5
int main()
{
	int arr1[size],arr2[size];
	
	printf("\nEnter %d numbers for 1st array::",size);
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("\nEnter %d numbers for 2st array::",size);
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr2[i]);
	}

	printf(" addition of two array");
	
	for(int i=0;i<size;i++)
	{
		printf("\n%d+%d=%d",arr1[i],arr2[i],arr1[i]+arr2[i]);
	}
return 0;
}
