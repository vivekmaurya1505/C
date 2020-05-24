#include<stdio.h>
int no_of_digit(int);
int no_of_digit(int n)
{ 
	static int count=0;

	if(n>0){
		n=n/10;
		count++;
		no_of_digit(n);
	}
	return count;

}
int main()
{
	int no;
	printf("Enter a number::");
	scanf("%d",&no);
	printf("\n number of digit=%d",no_of_digit(no));

return 0;
}
