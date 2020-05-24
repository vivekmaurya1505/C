#include <stdio.h>
enum months
{
	Jan=1, Feb,Mar, Apr , May, Jun, Jul, Aug, Sep,Oct, Nov, Dec
};
typedef enum months MONTHS;
int main(void)
{
	MONTHS m;// enum months m;

	printf("\n Enter Month :: ");
	scanf("%d", &m);

	switch(m)
	{
		case Jan: printf("\n Jan has 31 days"); break;
		case Feb: printf("\n Feb has 28 days"); break;
		case Mar: printf("\n Mar has 32 days"); break;
	}
	return 0;
}
