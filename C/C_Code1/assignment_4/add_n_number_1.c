#include<stdio.h>
#define size 5
int add(int *,int);
int add(int *p,int i)
{
	if(i>=0)
	{
		static int sum=0;
		add(p,--i);
		sum=sum+(*(p+i));
		return sum;
	}
}


int main()
{
int no[size];
printf("\n Enter %d numbers::",size);
for(int i=0;i<size;i++)
{
scanf("%d",&no[i]);

}

int ans=add(no,size);

printf("ans=%d",ans);



//for(int i=0;i<size;i++)
//{
//printf("%d",no[i]);

//}




























return 0;
}
