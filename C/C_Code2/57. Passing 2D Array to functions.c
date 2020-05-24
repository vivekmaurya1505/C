#include <stdio.h>
#define ROW 2
#define COL 2
//void ReadMatrix(int m[ROW][COL], int row, int col);
void ReadMatrix (int m[][COL], int row, int col);
void PrintMatrix(int m[][COL], int row, int col);
void MatrixAddition(int m1[][COL],int m2[][COL], int res[][COL],  int row, int col);
void MatrixSub(int m1[][COL],int m2[][COL], int res[][COL],  int row, int col);

int main( void )
{
	int mat1[ROW][COL]={0}, mat2[ROW][COL]={0}, ans[ROW][COL]={0};

	printf("\n Enter Matrix1 Elements :: \n");
	ReadMatrix(mat1, ROW, COL);

	printf("\n Matrix1 \n :: ");
	PrintMatrix(mat1, ROW, COL);

	printf("\n Enter Matrix2 Elements :: \n");
	ReadMatrix(mat2, ROW, COL);

	printf("\n Matrix2 \n :: ");
	PrintMatrix(mat2, ROW, COL);

	printf("\n Matrix Addition :: ");
	MatrixAddition(mat1, mat2, ans, ROW, COL);
	printf("\n Addition of matrix (ans ) \n :: ");
	PrintMatrix(ans, ROW, COL);

	printf("\n Matrix Substration :: ");
	MatrixSub(mat1, mat2, ans, ROW, COL);
	printf("\n  Minus of matrix (ans ) \n :: ");
	PrintMatrix(ans, ROW, COL);


	printf("\n\n\n\n\n");
	return 0;
}
void MatrixSub(int m1[][COL],int m2[][COL], int res[][COL],  int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			//res[r][c]= m1[r][c]- m2[r][c];
			*(*(res+r)+c)= *(*(m1+r)+c)  -  *(*(m2+r)+c);
		}
	}
	return;
}

void MatrixAddition(int m1[][COL],int m2[][COL], int res[][COL],  int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			//res[r][c]= m1[r][c]+ m2[r][c];
			*(*(res+r)+c)= *(*(m1+r)+c)  +  *(*(m2+r)+c);
		}
	}
	return;
}
void ReadMatrix (int m[][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row; r++)
	{
		for(c=0; c<col; c++)
		{
			printf("\n m[%d][%d] :: ", r,c);
			//scanf("%d", &m[r][c]);
			scanf("%d", (*(m+r)+c));
		}
	}
	return;
}
void PrintMatrix(int m[][COL], int row, int col)
{
	int r,c;
	for(r=0; r<row ; r++)
	{
		for(c=0; c<col; c++)
		{
			//printf("\t%d [%u]", m[r][c], &m[r][c]);
			printf("\t%d [%u]", *(*(m+r)+c), (*(m+r)+c));
		}
		printf("\n");// new line
	}
	return;
}
