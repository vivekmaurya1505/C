#include<stdio.h>
int * test(int );
int *test(int x)
{
static int  y;
 y=x*x;
return &y;
}

int main()
{
int *y=test(10);
//printf("\n &y=%u",test(10));

printf("\n *y=%d",*y);
return 0;
}
