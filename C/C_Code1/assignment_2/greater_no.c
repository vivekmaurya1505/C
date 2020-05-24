#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter any three number::");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{	if(b>c)
	{
	printf("number %d is bigger",a);
	}
	else

	printf("number %d is bigger",c);

}

else 
{
	if(b>c)
	{	
	
	printf("number %d is bigger",b);
	}
	else
	{
	printf("number %d is bigger",c);
	}
}




return 0;
}
