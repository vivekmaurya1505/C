#include<stdio.h>
void SumProdDiv(int n1, int n2, int *ps, int *pp, int *pd, int *fp);

int main(void)
{
	int no1=20, no2=10, sum=0, prod=0, div=0, flag=0;
	SumProdDiv(no1, no2, &sum, &prod, &div, &flag);

	printf("\n %d + %d = %d", no1, no2, sum);
	printf("\n %d * %d = %d", no1, no2, prod);
	if(flag==0)
		printf("\n %d / %d = %d", no1, no2, div);
	else
		printf("\n can not divide by zero");
	return 0;
}
void SumProdDiv(int n1, int n2, int *ps, int *pp, int *pd, int *pf)
{
	*ps= n1+n2;
	*pp= n1*n2;
	if(n2==0)
		*pf=1;
	else
		*pd= n1/n2;
	return;
}
