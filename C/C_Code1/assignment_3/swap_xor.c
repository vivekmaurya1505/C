#include<stdio.h>
void swap_xor(int ,int);
void swap_xor(int a,int b){
a=a^b,b=a^b,a=a^b;
printf("no1=%d,no2=%d",a,b);
}
int main(){
	int a,b;
	printf("Enter any two number::");
	scanf("%d%d",&a,&b);
	swap_xor(a,b);
return 0;
}
