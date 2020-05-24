#include<stdio.h>
int main()
{
	int i,j,k, a[3][3]={{1,2,3},{5,6,7},{8,9,0}};
	i=0;j=0;k=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j>i)
			{
			if(j!=i)
			{ 
			k=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=k;
	  		}
			}
		//	break;
		
	}
	}
	
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
             
	
}
