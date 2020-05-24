#include<stdio.h>
#define size 10 
void fun(int *,int );
void fun(int a[],int i)
{       // int *b=a;
	if(i<size-1)
	{ 
		i++;
		fun(a,i);
	//	printf("\n====%d",i);
		printf("====%d\n",a[i]);
	}

}
int main()
{int k=-1;

int arr[size]={0};

printf("\nEnter a number::::");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}


//for(int i=size-1;i>=0;i--)
//{
//printf("\n%d",arr[i]);

//}

fun(arr,k);















return 0;
}

