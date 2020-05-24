#include<stdio.h>
int main()
{
	int m,n,in=0,z,x,k,a[10],ans=0;
	int i;
	printf("enter the order of equation:");
	scanf("%d",&n);
	printf("enter value of x:");
	scanf("%d",&x);
	m=n;
	printf("Enter the coefficients");
         for (int i=0;i<n;i++)
	 {
               scanf("%d",&a[i]);
	 }

	 for(k=0;k<m;k++)
	 {
		 z=1;
		 for(i=0;i<(n-1);i++)
		 {
			 z=z*x;
		 }

		 ans+=a[in]*z;
		 in++;
		 n--;
	 }
	 printf("ans=%d",ans);
}
