#include <stdio.h>
void table(int n);
int table_no(int n, int c);
int main(void)
{
	int no, i;
	printf("\n Enter No ::");
	scanf("%d", &no);
	printf("\n print table in main :: \n");
	printf("\n============================\n");
	for(i=1; i<=10; i++)
	{
		printf("\n %d * %d = %d", no, i, table_no(no, i));
	}

	printf("\n============================\n");

	table(no);
	return 0;
}
int table_no(int n, int c)
{
	return n*c;
}
void table(int n)
{
	int counter;
	printf("\n table of %d in function \n", n);
	for(counter=1; counter<=10; counter++)
	{
		printf("\n %d * %d = %d ", n, counter, n*counter);
	}
	return ;
}
// return 10;    int
// return 10.2;  double
// return 10.2f; float
// return 10.2F; float
// return 10L; long int
// return 10l; long int
// return 'A'; char
// return;     void   (nothing)


