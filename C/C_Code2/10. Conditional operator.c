#include <stdio.h>
int main()
{
	int no1;

	printf("\n Enter no :: ");
	scanf("%d", &no1);

	/*
	if(no1%2==0)
	{
		printf(" %d is even", no1);
	}
	else
	{
		printf("\n %d is odd", no1);
	}*/
	/*if(no1%2==0)
		printf(" %d is even", no1);
	else
		printf("\n %d is odd", no1);
	 */

	// condition ? true part : false part :
	no1%2==0 ? printf("%d is even ", no1) : printf("%d is odd", no1);

  // condition ? true part : condition ? true part : false part ;

	no1>0 ? printf("\n %d is +ve", no1) : no1==0 ? printf("\n %d is zero", no1) : printf("\n %d is -ve", no1);

	{
		int no1, no2;
		printf("\n Enter no1 :: ");
		scanf("%d", &no1);
		printf("\n Enter no2 :: ");
		scanf("%d", &no2);



		no1>no2 ? printf("%d is (no1) max", no1) : no1==no2 ? printf("%d is equal to %d", no1, no2) : printf("%d is (no2) max", no2);


	}

	return 0;
}
