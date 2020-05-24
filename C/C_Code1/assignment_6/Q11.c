// GIVE AN EXPRESSION TO PRINT LAST ELEMENT OF ARRAY IRRESPECTIVE OF OF LENGTH USING POINTER NOTATION

#include<stdio.h>


int main()
{
 int arr[]={1,2,3,4,5,6};

 int *p;
 p=(&arr+1);


 printf("\n The last element of the array is %d ",*(p-1));
 return 0;
}
