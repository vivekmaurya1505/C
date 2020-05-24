#include <stdio.h>
#define ROW 3
#define COL 3
int main( void )
{
/*	int mat1[ROW][COL]={{1,2, 3}, {4,5,6}, {7,8, 9}}; // allowed
	int mat2[][COL]={{1,2, 3}, {4,5,6}, {7,8, 9}}; // alowed
	int mat3[ROW][]={{1,2, 3}, {4,5,6}, {7,8, 9}}; // not allowed
	int mat4[][]={{1,2, 3}, {4,5,6}, {7,8, 9}}; // not allowed
	int mat5[ROW][COL]={{1,2}, {1}, {2}};
*/
	int mat[ROW][COL]={0},r,c, sum=0, colsum[COL]={0}, gtotal=0;

	printf("\n Enter Matrix Elements :: \n");
	for(r=0; r<ROW; r++)
	{
		for(c=0; c<COL; c++)
		{
			printf("\n mat[%d][%d]", r,c);
			scanf("%d", &mat[r][c]);
		}
	}
	printf("\n Matrix \n :: ");
	for(r=0; r<ROW ; r++)
	{
		for(c=sum=0; c<COL; c++)
		{
			printf("\t%d [%u]", mat[r][c], &mat[r][c]);
			sum+=mat[r][c]; // eow wise sum
			colsum[r]+= mat[c][r]; // col wise sum
		}
		printf("= %d\n",sum);// new line
		gtotal+=sum;
	}
	for(c=0; c<COL ; c++)
		printf("\t%d\t", colsum[c]);
	printf("\t%d\t", gtotal);

	printf("\n\n\n\n\n");
	return 0;
}
