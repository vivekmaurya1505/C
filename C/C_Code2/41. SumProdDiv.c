#include<stdio.h>
void SumProdDiv(int n1, int n2, int *ps, int *pp, int *pd);
int main(void)
{
	int no1=20, no2=10, sum=0, prod=0, div=0;
	SumProdDiv(no1, no2, &sum, &prod, &div);

	printf("\n %d + %d = %d", no1, no2, sum);
	printf("\n %d * %d = %d", no1, no2, prod);
	printf("\n %d / %d = %d", no1, no2, div);
	return 0;
}
void SumProdDiv(int n1, int n2, int *ps, int *pp, int *pd)
{
	*ps= n1+n2;
	*pp= n1*n2;
	*pd= n1/n2;
	return;
}
