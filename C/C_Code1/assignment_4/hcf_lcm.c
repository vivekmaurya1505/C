#include<stdio.h>
int main()
{

int a,b;
printf("\nEnter any two number for HCF AND LCM:::");
scanf("%d%d",&a,&b);
int a1=a,b1=b,ans;

	while(a!=0 && b!=0)
	{
	if(a==b)
	{
		ans=a;
	printf("HCF is =%d",ans);
	}

	if(a>b)
	{
		a=a%b;

	}
	else
	
	{
		b=b%a;
	}
	if(a==0)
	{
		ans=b;
		printf("HCF is =%d",ans);

	}
	if(b==0)
	{
		ans=a;
		printf("HCF is =%d",ans);
	}

}
printf("\n=================================================\n");

printf("\nLCM is=%d",(a1*b1)/ans);














return 0;
}
