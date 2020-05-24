#include<stdio.h>

//	static int arr1[5]={3,2,3,4,5};
int *fun()
{
	static int arr[5]={1,2,3,4,5};

	printf("\nfun_arr= %u",arr);
	
	return arr;
}
int (*fun1())[5]
{
	
	static int arr[5]={3,2,3,4,5};

	printf("\nfun_1arr= %u",&arr);
	return &arr;

}
int main()
{
	int *p=fun();
	int (*q)[5]=fun1();
	
	printf("\nfun_arr= %u",p);
	printf("\n====%d",*p);
	printf("\nfun1_&arr= %u",q);
return 0;
}
