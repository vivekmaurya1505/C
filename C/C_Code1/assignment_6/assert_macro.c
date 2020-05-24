#include<stdio.h>
#include<assert.h>
int main(){
	
	int x=10;
	int *ptr1,*ptr2;
	ptr1=&x;
	ptr2=NULL;
	
	assert(ptr2!=NULL);
	printf("\n %u,%u",*ptr1,*ptr2);

}
