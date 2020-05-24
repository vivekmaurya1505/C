#include <stdio.h>
int main(void)
{
	// check no is armstrong or not
/*	int no, rem, sum, ono;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	for(rem=sum=0,ono=no ; no!=0; no/=10)
	{
		rem= no%10;
		sum+=rem*rem*rem;
	}
	if(ono==sum)
		printf("%d is armstrong no", ono);
	else
		printf("%d is not armstrong no", ono);
		*/

	// print 1 to 500 armstrong


	// check no is armstrong or not
		int no, rem, sum, ono;
		printf("\n armstrong 1 to 500 \n");
		for( no=1; no<=500; no++)
		{
			for(rem=sum=0,ono=no ; ono!=0; ono/=10)
			{
				rem= ono%10;
				sum+=rem*rem*rem;
			}
			if(no==sum)
				printf("\n%d", no);
		}


	return 0;
}
