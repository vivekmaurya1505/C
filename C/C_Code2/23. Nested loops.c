#include <stdio.h>
int main(void)
{
	int row, col;
	// table horizontal and vertial
	/*for(row=1; row<=10; row++) // outer loop
	{
		for(col=1; col<=10; col++)// inner loop
		{
			//printf("\n row =%d col =%d", row, col);
			printf("%5d", row*col);
		}
		printf("\n");
		getchar();
	}*/

	// 1 to 100 no
	for(row=1; row<=10; row++) // outer loop
	{
		for(col=1; col<=10; col++)// inner loop
		{
			//printf("\n row =%d col =%d", row, col);
			printf("%5d", row+(col-1)*10);
		}
		printf("\n");
		//getchar();
	}
	return 0;
}
