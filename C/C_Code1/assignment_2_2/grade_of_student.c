#include<stdio.h>
int main()
{
	int physics,chemistry,math;
	float ans;
	char a[10];
printf("\nEnter the name of student::");
scanf("%s",a);
printf("Enter mark of %s",a);

printf("\n physics ");
scanf("%d",&physics);

printf("\n chemistry ");
scanf("%d",&chemistry);

printf("\n math ");
scanf("%d",&math);

	if(physics >=40 && chemistry >=40 && math >=40)
	{
		ans=((physics+chemistry+math)*100)/300;
	}

	else 
	{
		printf("%s is failed",a);
	}


	if(ans>=85)
	{
		printf("\nA+");
	}
	else if(ans>=70)
	{
		printf("\nA");
	}
	else if(ans>=60)
	{
		printf("\nB");
	}
	else if(ans>=50)
	{
		printf("\nC");
	}
	else if(ans>=40)
	{
		printf("\nD");
	}

return 0;
}
