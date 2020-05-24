#include<stdio.h>
int main()
{
	
	int n,m,o,p,k=0;
//	int p, i,j,k,a1[2][2]={{1,2},{1,5}},a2[2][2]={{1,3},{4,5}},ans[2][2]={0};
//	k=0;
//
//	for(i=0;i<2;i++){
//		for(j=0;j<2;j++){          
//			for(int k=0;k<2;k++){
//			 	ans[i][j]= ans[i][j]+a1[i][k]*a2[k][j];
//			}
//			
//		       	printf("%d\n",ans[i][j]);
//		}
//	}
//			 
		  
	printf("Enter 1st size of your matrix eg.n*m\n");	
	scanf("%d*%d",&n,&m);
	int a1[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
            
	printf("Enter 2nd size of your matrix eg.m*p\n");	
	scanf("%d*%d",&o,&p);
	
	int a2[o][p];
	int ans[n][p];
	for(int i=0;i<o;i++)
	{
		for(int j=0;j<p;j++)
		{
			scanf("%d",&a2[i][j]);
		}
		printf("\n");
	}
	
	if(n||m==o||p){
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){          
				for(int k=0;k<2;k++){
			 		  ans[i][j]= ans[i][j]+a1[i][k]*a2[k][j];
				}
			
		       		printf("%d\n",ans[i][j]);
			}
		}

	}
	else{
		printf("Entered matrix are invalid ::\n");	
	} 	
		

}
