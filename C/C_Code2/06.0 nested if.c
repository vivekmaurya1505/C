#include <stdio.h>
int main()
{
	int no1, no2, ans;
	char op;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n Enter No2 :: ");
	scanf("%d", &no2);

	printf("\n Enter Op :: ");
	scanf("%*c%c", &op); // %*c ignores char or u can use getchar()

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
		ans= no1/no2;
	else
	{
		printf("\n invalid operator");
		exit(0);//return 0;
	}
	printf("\n %d %c %d =%d", no1, op, no2, ans);

	return 0;
}
