#include<stdio.h>

int main()
{
	int no,count=0;
	printf("Enter a number::");
	scanf("%d",&no);
	while(no!=0){
		no=no/10;
		count++;
	}
	printf("\n number of digit=%d",count);

return 0;
}
