#include<stdio.h>
void SumProdDiv(int n1, int n2, int *ps, int *pp, int *pd);
int flag; // default value of flag is 0 as it is global variable
int main(void)
{
	int no1=20, no2=0, sum=0, prod=0, div=0;
	SumProdDiv(no1, no2, &sum, &prod, &div);

	printf("\n %d + %d = %d", no1, no2, sum);
	printf("\n %d * %d = %d", no1, no2, prod);
	if(flag==0)
		printf("\n %d / %d = %d", no1, no2, div);
	else
		printf("\n can not divide by zero");
	return 0;
}
void SumProdDiv(int n1, int n2, int *ps, int *pp, int *pd)
{
	*ps= n1+n2;
	*pp= n1*n2;
	if(n2==0)
		flag=1;
	else
		*pd= n1/n2;
	return;
}
