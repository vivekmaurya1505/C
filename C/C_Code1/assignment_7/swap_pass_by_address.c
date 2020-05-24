#include<stdio.h>
void swap(int *, int *);
void swap(int *x,int *y)
{
	*x=*x^*y;
	*y=*x^*y;
	*x=*x^*y;

}
int main()
{
	int x=10,y=20;

	printf("\nbefore swap x=%d,y=%d",x,y);

	swap(&x,&y);

	printf("\nafter swap x=%d,y=%d",x,y);
return 0;
}
