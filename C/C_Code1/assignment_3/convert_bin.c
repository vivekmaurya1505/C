#include<stdio.h>
#define size 5
int main()
{
unsigned char arr[size]={0};
int n;
printf("Enetr a number::");
scanf("%d",&n);
int no=n;
for(int i=0;i<size;i++)
{
	arr[i]=n%2;
	n=n/2;

}
printf("Binary number is=  ");

for(int j=0;j<size;j++)
{
	printf("%hhd",arr[j]);

}

printf("\noctal number is= %o ",no);

printf("\nhex number is= %x ",no);














return 0;
}
