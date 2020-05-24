#include <stdio.h>
#include <stdlib.h>

enum menuchoice
{
	Exit=0, Addition, Minus, Division, Multiply
};
typedef enum menuchoice MENUCHOICE;
int main()
{
	int no1, no2 , ans;
	MENUCHOICE choice;//enum menuchoice choice;
	do
	{
		printf("\n Enter No1 :: ");
		scanf("%d", &no1);

		printf("\n Enter No2 :: ");
		scanf("%d", &no2);

		printf("\n 1. Addition  \n 2. Minus \n 3. Division  \n 4. Multiply \n 0. Exit ");
		printf("\n Enter your choice :: ");
		scanf("%d", &choice);

		ans=0;

		switch(choice)
		{
			default : printf("\n  invalid choice:: ");
					continue;//break;
			case Exit:// exit
					exit(0); // return 0;
			case Addition:// addition
					ans= no1+no2; break;
			case Minus:// Minus
					ans= no1-no2; break;
			case Division:// Division
					if(no2==0)
					{
						printf("\n can not divide by zero");
						return 0; // exit(0);
					}
					else
						ans= no1/no2;
					break;
			case Multiply: // multiply
					ans= no1 *no2;
					break;
		}

		printf("\n ans= %d", ans);

		printf("\n Enter 1 to Continue or 0 to Exit :: ");
		scanf("%d", &choice);

	}while(choice!=0);

	return 0;
}
