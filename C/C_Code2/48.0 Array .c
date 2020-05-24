#include <stdio.h>
#define SIZE 5

int main( void )
{
	int arr[ SIZE ], index;
	//int arr[  ]= {1, 2,3,4,5}, index; // int arr[ 5 ];

	printf("\n Enter Elements of array :: ");
	for(index=0; index<SIZE; index++)
	{
		printf("\n arr[%d] ::", index);
		scanf("%d", &arr[index]);		
	}

	printf("\n Elements of array :: \n");
	for(index=0; index<SIZE ; index++)
	{
		printf("\n arr[%d] %d [%u]", index, arr[index], &arr[index]);
	}
	printf("\n size of array in bytes =%d", sizeof(arr));
	printf("\n &arr=%u &arr[0]=%u arr=%u\n", &arr, &arr[0], arr);
	printf("\n &arr+1=%u &arr[0]+1=%u arr+1=%u\n", &arr+1, &arr[0]+1, arr+1);

	printf("*arr=%d", *arr);

/*	arr++;   // lvalue req we can not change base address of array
	++arr;
	--arr;
	arr--; */

	++arr[1]; // allowed



	return 0;
}
