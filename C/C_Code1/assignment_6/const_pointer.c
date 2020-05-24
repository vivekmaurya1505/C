#include<stdio.h>
int main()
{

int x=10;
//int const *p=&x;
//const int *p=&x;
//int *const p=&x;
//const *int p=&x;
//const int *const p=&x;
const int *const p=&x;
//&p=20;
//p++;
//(*p)++;
//p=&y;
//*p=18;
printf("\n %d",x);

return 0;
}

