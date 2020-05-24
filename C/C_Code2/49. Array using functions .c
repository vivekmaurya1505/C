#include <stdio.h>
#define SIZE 5
//void ReadArray(int a[SIZE], int size);
void ReadArray(int a[], int size); // array notation
void PrintArray(int *a, int size);// pointer notation
//void PrintArray(int a[], int size);

int main( void )
{
	int arr1[ SIZE ], arr2[ 7 ];

	printf("\n Enter Elements of array1 :: ");
	ReadArray(arr1,SIZE);

	printf("\n Elements of array1 :: \n");
	PrintArray(arr1, SIZE);

	printf("\n Enter Elements of array2 :: ");
	ReadArray(arr2,7);

	printf("\n Elements of array2 :: \n");
	PrintArray(arr2,7);
	//arr1++;

	printf("\n size of arr1=%d", sizeof(arr1));
	printf("\n size of arr2=%d", sizeof(arr2));

	//arr2=arr1; //erorr
	return 0;
}
void ReadArray(int a[], int size) // array notation
{
	int index;
	printf("\n size of a=%d", sizeof(a)); // 8 or 4 or 2
	for(index=0; index<size; index++)
	{
		printf("\n arr[%d] ::", index);
		//scanf("%d", &a[index]);
		//scanf("%d", (a+index));
		//scanf("%d", (index+a);
		  scanf("%d", &index[a]);
	}
	return ;
}
void PrintArray(int *a, int size)// pointer notation
{
	int index;

	for(index=0; index<size ; index++)
	{
		//printf("\n arr[%d] %d [%u]", index, a[index], &a[index]);
		//printf("\n arr[%d] %d [%u]", index, *(a+index), (a+index));
		//printf("\n arr[%d] %d [%u]", index, *(index+a), (index+a));
		printf("\n arr[%d] %d [%u]", index, index[a], &index[a]);
	}
	//a++; // allowed as it is pointer not array
	return;

}
