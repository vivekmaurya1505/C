#include <stdio.h>
int main(void)
{
	int i, j, k, row;

	printf("\n Enter how many rows u want ::");
	scanf("%d", &row);

	for(i=1; i<=row; i++)
	{
		for(j=row; j>=i ; j--)
		{
			printf(" # ");
		}
		for(k=i; k>=1; k--)
		{
			printf("%3d", k);
		}
		for(k=1; k<=i; k++)
		{
			printf("%3d", k);
		}

		printf("\n");//goto next line
	}

	for(i=row; i>=1; i--)
	{
		for(j=row; j>=i ; j--)
		{
			printf(" @ ");
		}
		for(k=i; k>=1; k--)
		{
			printf("%3d", k);
		}
		for(k=1; k<=i; k++)
		{
			printf("%3d", k);
		}
		printf("\n");//goto next line
	}

	return 0;
}
