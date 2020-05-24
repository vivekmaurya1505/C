#include <stdio.h>
int main()
{
	int no, unit, tenth;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	if(no==0)
		printf("zero");
	else
	{
		tenth=no/10;
		unit= no%10;

		switch(tenth)
		{
			case 1:
					switch(unit)
					{
						case 0:     printf(" ten"); break;
						case 1:     printf(" eleven"); break;
						case 2:     printf(" twelve"); break;
						case 3:     printf(" thirteen"); break;
					}
					//break;
			case 1+1:   printf(" twenty"); break;
			case 1+2*1: printf(" thirty"); break;
		}
		if( tenth!=1) // 11 to 19
		{
			switch(unit)
			{
				case 1:     printf(" one"); break;
				case 2:     printf(" two"); break;
				case 3:     printf(" three"); break;
			}
		}
	}


// I II III IV V VI VII VIII IX X



	return 0;
}
