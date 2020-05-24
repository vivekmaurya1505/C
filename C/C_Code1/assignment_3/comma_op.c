#include<stdio.h>
int main()
{
int a=10,b=20,c=30,d=0;
d=++a,++b,++c,a+5;
printf("\nd===%d\ta===%d\tb===%d\tc===%d",d,a,b,c);

a=10,b=20,c=30,d=0;
d=(++a,++b,++c,a+5);
printf("\nd===%d\ta===%d\tb===%d\tc===%d",d,a,b,c);
















return 0;

}
