#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int add(int a,int b)
{
	a=a+b;
	return a;
}

int sub(int a,int b)
{
	a=a-b;
	return a;
}
int mul(int a,int b)
{
	a=a*b;
	return a;
}
int div(int a,int b)
{
	if(b==0)
	{
		printf("\n division not allowed::");
		return 0 ;
	}
	a=a/b;
	return a;
}
int main()
{
	int a,b,opt_no;
	printf("Enter two numbers:::");
	scanf("%d%d",&a,&b);

	printf("\n1.add\n2.sub\n3.mul\n4.div");
	scanf("%d",&opt_no);
switch(opt_no)
{
	case 1:printf("\nadd=%d",add(a,b));break;

	case 2:printf("\nsub=%d",sub(a,b));break;
	case 3:printf("\nmul=%d",mul(a,b));break;
	case 4:printf("\ndiv=%d",div(a,b));break;

	default: printf("\n Invalid operator::::");break;
}

return 0;
}
