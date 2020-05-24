#include<stdio.h>
void fun1(const int *p)
{
	*p=10;
printf("\n*p=%d",*p);

}
int main()
{
int x=15;
 int *y=&x;
fun1(y);

printf("\nx=%d",x);
return 0;
}


