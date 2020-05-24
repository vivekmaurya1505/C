#include<stdio.h>
int hcf(int, int);
int hcf(int a,int b){

	if(a==b){
		return a;
	}
	else if(a==0){
		return b;
	}
	else if(b==0){
		return a;
	}


	while(a!=0 && b!=0){
		if(a>b){
                	a=a%b;
		}
        	else{
                	b=b%a;
		}
		hcf(a,b);
	}

}
int main(){

	int a,b;
	printf("\nEnter any two number for HCF AND LCM:::");
	scanf("%d%d",&a,&b);
	printf("\n hcf is=%d",hcf(a,b));
return 0;
}
