#include<stdio.h>
#define size 10
void dec_to_any_no(int,int);
void dec_to_any_no(int n,int base)
 {       int i=0,rem;
	unsigned int arr[size]={0};
	
	while(n!=0)
	{

	rem=n%base;
	if(rem<10)
	{
	n=n/base;
	i++;
	}
	else{
		 
	}
       }

       for(int j=0;j<i;j++)
       {
	       printf("%d",arr[j]);
       }

return; 

}


int main()
{	int n,base; 
	printf("Enetr a number and its base::");
      	scanf("%d %d",&n,&base);
	dec_to_any_no(n,base);

return 0;
}
