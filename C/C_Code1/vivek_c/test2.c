#include<stdio.h>
int main(){
	
/*	int *ptr;
	scanf("%d",ptr);
	printf("%d",*ptr);
*/

	int arr[10]={1,2,3,4,5,6,7,8,9,0},*p;
	for(p=&arr[0];p<arr+10;p++)
	{printf("\n==%d",*p);
	}

	printf("\narr+1=%l",(long unsigned int)arr+1);
return 0;
}
