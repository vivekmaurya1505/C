#include<stdio.h>
int one_zero(int);
int one_zero(int no){
	static int zero,one;
	int n=0;
	if(no==0){
		printf("\n no of one =%d and no of zero =%d",one ,zero);
		return 0;
	}
	if(no!=0){
	 	n=no%10;
                no=no/10;
                if(n==0){
                	zero++;
                }
                else{
                	one++;
                }
			
		one_zero(no);
	}



}
int main()
{
	int no,n,one=0,zero=0;
	printf("\n Enter binary number::");
	scanf("%d",&no);
	one_zero(no);
return 0;
}
