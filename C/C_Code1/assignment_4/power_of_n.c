#include<stdio.h>

int main()
{
	int b,i,power=1;
printf("Enter base and index::::");
scanf("%d%d",&b,&i);
for(int j=0;j<i;j++)
{
	power=power*b;

}

printf("\n %d raise to %d is=%d ",b,i,power);














return 0;
}
