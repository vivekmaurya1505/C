#include <stdio.h>
#include<stdlib.h>
int main()
{
	int no1, no2, ans;
	char op;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n Enter No2 :: ");
	scanf("%d", &no2);

	printf("\n Enter Op :: ");
	scanf("%*c%c", &op);

/*
	if(op=='+')
		ans= no1+no2;
	if(op=='-')
		ans= no1-no2;
	if(op=='*')
		ans= no1*no2;
	if(op=='/')
		ans= no1/no2;
		*/

	if(op=='+')
		ans= no1+no2;
	else if(op=='-')
		ans= no1-no2;
	else if(op=='*')
		ans= no1*no2;
	else if(op=='/')
	{
		if( no2==0)
		{
			printf("\n can not divide by zero");
			exit(0); // return 0;
		}
		else
			ans= no1/no2;
	}
	else
	{
		printf("\n invalid operator");
		exit(0);//return 0;
	}

	printf("\n %d %c %d =%d", no1, op, no2, ans);





	return 0;
}
