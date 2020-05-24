#include<stdio.h>
int det(int a[3][3]);
int det(int a[3][3])
{int x=0,j=0;
	for(int i=0;i<3;i++)
	{
		printf("%d",a[i][j]);
	
     x=x+(a[0][i]*((a[1][(i+1)%3]*a[2][(i+2)%3])-(a[1][(i+2)%3]*a[2][(i+1)%3])));
		 } 
return x;
           
}
int main()
{
 int c[3][3],x;
printf("enter coefficients");
 for(int i=0;i<3;i++)
 { for(int j=0;j<3;j++)
	 {
		 scanf("%d",&c[i][j]);
	 }
 }
    for(int i=0;i<3;i++)
    {for(int j=0;j<3;j++)
	    {
		    printf("%d\n",c[i][j]);
	    }

    }

    

	printf("\n=%u",c);
    	x=det(c);
         printf("%d",x);


return 0;

}
