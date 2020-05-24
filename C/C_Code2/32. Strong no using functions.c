#include <stdio.h>
int factoiral(int n); // fun decl
int IsStrongNo(int n); // single no as strong or not
void StrongNoInRange(int lowerLimit, int upperLimit);
// print all strong no in range
int main(void)
{
	//1. check factorial of no
	/*int no, ans=0;
	printf("\n Enter No :: ");
	scanf("%d", &no);
	ans=factoiral(no); // fuction call
	printf("\n %d! =%d", no,ans );
	*/

	// 2. check no is IsStrong or not
	/*int no, ans;
	printf("\n Enter No :: ");
	scanf("%d", &no);

	// ans=IsStrongNo(no);
	// if(ans==no)
	// or
	if( no==IsStrongNo(no))
		printf("\n %d is strong no ", no);
	else
		printf("\n %d is not strong no ", no);
	*/


	//3 strong no in range
	int lower, upper;
	printf("\n Enter Lower limit :: ");
	scanf("%d", &lower);
	printf("\n Enter upper limit :: ");
	scanf("%d", &upper);
	StrongNoInRange(lower, upper);

	return 0;
}

void StrongNoInRange(int lowerLimit, int upperLimit)
{
	int n;
	printf("\n Strong no from %d to %d \n ", lowerLimit, upperLimit);
	for( n= lowerLimit; n<=upperLimit; n++)
	{
		if( n==IsStrongNo(n))
			printf("\%5d", n);
	}

}
int IsStrongNo(int n)
{
	int rem, sum;
	sum=rem=0;
	while(n!=0)
	{
		rem= n%10;
		n/=10;//n= n/10;
		sum+=factoiral(rem);
	}
	return sum;
}
int factoiral(int n) // fun defination
{
	int fact, counter;
	for(counter=fact=1; counter<=n; counter++)
	{
		fact*=counter;//fact= fact*counter;
	}

	return fact;
}
