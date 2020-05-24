#include<stdio.h>
int main()
{
	int no,n,one=0,zero=0;
	printf("\n Enter binary number::");
	scanf("%d",&no);
	while(no!=0){
		n=no%10;
		no=no/10;
		if(n==0){
			zero++;
		}
		else{
			one++;
		}
	}
printf("\n one=%d  zero=%d",one,zero);


	
return 0;
}
