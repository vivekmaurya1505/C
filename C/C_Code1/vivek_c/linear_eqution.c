#include<stdio.h>
int fun(int []  );
int det(int []  ,int [][3]);
int fun(int a[])
{
	return(a[0]*a[3]-a[1]*a[2]);
}
int det(int d[],int d1[][3])
{
	int detr=d[0]*d1[0][0]-d[1]*d1[0][1]+d[2]*d1[0][2];
return detr;
}
int main()
{
	int m,n,k=0,l=0,arr[4],cof[9],determinant,cons_no[3];
	printf("Enter size of your matrix eg.n*m\n");
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
        for(int i=0;i<n;i++)
        {	
                for(int j=0;j<m;j++)
                {
                        printf("%d\t",a1[i][j]);

                }
		printf("\n");
        }

	printf("\nEnter constant number:::");
	for(int i=0;i<m;i++){
		scanf("%d",&cons_no[i]);
	}
//a[k]=2;
        for(int a=0;a<m;a++){
		for(int b=0;b<m;b++){
			k=0;
			for(int i=0;i<m;i++){
				for(int j=0;j<m;j++){
					if(i!=a && j!=b){
						arr[k]=a1[i][j];
						k++;				
					}
				
				}
			}
			cof[l]=fun(arr);
			l++;
		}
	}

                for(int j=0;j<n*m;j++)
                {
                        printf("\n%d",cof[j]);

                }
	determinant=det(cof,a1);

	printf("\ndeterminant=%d",determinant);
 
	for(int i=0;i<n*m;i=i+2){
		cof[i]=-1*cof[i];
	}
		
	float detr_inv=(1.0/determinant);
                for(int j=0;j<n*m;j++)
                {
                        printf("\n%d",cof[j]);

                }
		k=0;
		float inv[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			inv[i][j]=detr_inv*cof[k];
			k++;
		}
	}

        for(int i=0;i<n;i++)
        {	
                for(int j=0;j<m;j++)
                {
                        printf("%f\t",inv[i][j]);

                }
		printf("\n");
        }

	for(int i=0;i<m;i++){

	}	
return 0;
}

