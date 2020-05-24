// ACCESS 2D ARRAY USING POINTERS

#include<stdio.h>


int main()
{

int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
int (*p)[4];
p=arr;



printf("\n sizeof(p) = %lu ",sizeof(p));

printf("\n sizeof(*p) = %lu ",sizeof(*p));
printf("\n sizeof(**p) = %lu ",sizeof(**p));
printf("\n value of p = %lu ",p);
printf("\n value of p+1 = %lu ",(p+1));
printf("\n\n  value of arr[2][3] = %d ",arr[2][3]);
printf("\n value of (*(arr+2))[3]= %d",(*(arr+2))[3]);
printf("\n value of *(*(arr+2)+3)= %d",*(*(arr+2)+3));


	return 0;
}
