#include<stdio.h>
int main()
{

int no;
printf("Enter 3 digit number::");
scanf("%d",&no);
while(no!=0)
{
printf("\n%d",no%10);
no=no/10;
}






return 0;
}
