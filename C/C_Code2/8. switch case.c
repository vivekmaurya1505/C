#include <stdio.h>
#include<stdlib.h>
int main()
{
	int no1, no2, ans;
	char op;

	printf("\n Enter No1 :: ");
	scanf("%d", &no1);

	printf("\n Enter Op :: ");
	getchar(); // skip one char
	scanf("%c", &op);
	//scanf("%*c%c", &op);

	printf("\n Enter No2 :: ");
	scanf("%d", &no2);

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

	/*if(op=='+')
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
	}*/


	switch(op)
	{
		default : printf("\n invalid operator :: ");
				exit(0);
		case '+' : //addition
				 ans= no1+no2; break;
		case '-' : //sub
				 ans= no1-no2; break;
		case '*' : //multiply
				 ans= no1*no2; break;
		case '/' : //divide
				 ans= no1/no2; break;

	}

	printf("\n %d %c %d =%d", no1, op, no2, ans);





	return 0;
}
