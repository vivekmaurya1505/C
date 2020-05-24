#include<stdio.h>
int det(int,int,int,int);
int det(int a,int b,int c,int d)
{
return(a*d-b*c);
}
int main()
{
	int a[3][3]={{6,1,1},{4,-2,5},{2,8,7}},i=0, y,z;
	for(int j=0;j<3;j++)
	{
		if(i==j==0){	
         	int x=det(a[1][1],a[1][2],a[2][1],a[2][2]);
		}	

		if(i==0 && j==1){
         		 y= det(a[1][0],a[1][2],a[2][0],a[2][2]);
		}	
                                               
		if(i==0 && j==2){
         		 z=det(a[1][0],a[1][1],a[2][0],a[2][1]);
		}
	}

		printf("\n det=%d",a[0][0]*x-a[0][1]*y+a[0][2]*z);

return 0;
}
