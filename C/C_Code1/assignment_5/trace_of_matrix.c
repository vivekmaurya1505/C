#include<stdio.h>
int main()
{
	int k, a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)
				k=k+a[i][j];

				
		}
	}
	printf("%d",k);
}


