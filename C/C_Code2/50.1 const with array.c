#include <stdio.h>
int main(void)
{
	const int arr[]={11,22,33};
	int *ptr=arr;

//	arr[0]=55; // not allowed
	//arr[0]++;
	//arr[0]+=6;


	printf("\n arr[0]=%d *ptr=%d", arr[0], *ptr);
	*ptr=55;
	printf("\n arr[0]=%d *ptr=%d", arr[0], *ptr);

    return 0;
}
