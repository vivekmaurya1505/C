// 2-D POINTERS


#include<stdio.h>

int main()
{

 int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
 int (*q)[3][4];

 q=&arr;

 printf("\n Sizeof q = %lu \n",sizeof(q));
 printf("\n Sizeof *q = %lu \n",sizeof(*q));
 printf("\n Sizeof **q = %lu \n",sizeof(**q));
 printf("\n Sizeof ***q = %lu \n",sizeof(***q));


return 0;


}
