#include <stdio.h>
int main(void)
{
	int row, col, counter=0;
	for(row=1; row<=5; row++)
	{
		for(col=1;col<=row; col++)
		{
			//printf("\nrow=%d col=%d", row, col);
			//printf("%5d", col);
			//printf("%5c", col+64);
			//printf("%5d", row);
			//printf("%5c", row+64);
			//printf(" * ");
			printf("%4d", ++counter);
		}
		printf("\n");
	}
	return 0;
}
