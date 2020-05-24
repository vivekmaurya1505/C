#include<stdio.h>
int counter=2;
void PrimeFactors(int n);
void PrimeFactorsWithRec(int n);
int main(void)
{
	int no=24;
//	PrimeFactors(no);
	PrimeFactorsWithRec(no);

	return 0;
}
void PrimeFactorsWithRec(int n)
{
//	static int counter=2; // solno1 static
	printf("\n n=%d [%u] counter=%d[%u]", n,&n, counter, &counter);
	//getchar();
	if(n==1)
	{
		return;
	}
	else if(n%counter==0)
	{
		n/=counter;//n=n/counter;
		printf(" %d *", counter);
	}
	else
		counter++;
	printf("\n n=%d [%u] counter=%d[%u]", n,&n, counter, &counter);
	printf("\n================================\n");
//	getchar();
	PrimeFactorsWithRec(n);
	return;
}

void PrimeFactors(int n)
{
	int counter=2;
	while(n!=1)
	{
		if(n%counter==0)
		{
			n/=counter;//n=n/counter;
			printf(" %d *", counter);
		}
		else
			counter++;
	}
	return;
}
