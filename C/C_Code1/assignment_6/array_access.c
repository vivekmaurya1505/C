#include<stdio.h>
int main()
{
int arr[5];
int (*parr)[5];
parr=&arr;

printf("size of arr=%d",sizeof(parr));

printf("size of arr=%d",sizeof(*arr));
printf("size of arr=%d",sizeof(**parr));

return 0;
}
