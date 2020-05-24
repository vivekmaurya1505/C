#include<stdio.h>
void swap(int *, int *);
void swap(int *x,int *y)
{
	*x=*x+*y;
	*y=(*x-*y)**y;

}
int main()
{
	int x=10,y=20;


	swap(&x,&y);

	printf("\nsum=%d,product=%d",x,y);
return 0;
}
