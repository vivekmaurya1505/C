#include<stdio.h>

int main(){

	int n,sum=0,no;
	printf("\n Enter how many  number you want to add::");
	scanf("%d",&no);
	for(int i=0;i<no;i++){
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("\n sum=%d",sum);
return 0;
}
