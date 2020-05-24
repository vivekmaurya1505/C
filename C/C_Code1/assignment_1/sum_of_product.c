
#include<stdio.h>
int main()
{

	int i=0,j=0, n1,n2, arr_n1[5]={0}, arr_n2[5]={0},sum=1;



printf("Enter any two number::");
scanf("%d%d",&n1,&n2);
while(n1!=0)
	
{
arr_n1[i]=n1%10;
i++;
n1=n1/10;

}


while(n2!=0)
{
arr_n2[j]=n2%10;
j++;
n2=n2/10;

}

for(int k=0;k<5;k++)

{
printf("\n\ta[k]=%d",arr_n1[k]);

}


for (int m=0;m<i;m++)
{
	for (int n=0;n<j;n++)
	{
		sum=sum*arr_n1[m]*arr_n2[n];

	}


}

printf("\n\n\nsum=%d",sum);
return 0;
}
