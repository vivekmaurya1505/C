#include <stdio.h>
int main()
{
	/* 1. sum of n numbers

	int no, counter, sum;

	printf("Enter No :: ");
	scanf("%d", &no);

	counter=sum=0;
	while(counter<no)
	{
		++counter;//counter= counter+1;
		printf("%4d", counter);
		if(counter<no)
			printf(" + ");
		sum+=counter;//sum= sum+counter;
	}
	printf(" =%d", sum);
	*/
	// ==============================================
	{
		//2. factorial of no
		/*int no, counter, fact;

		printf("Enter No :: ");
		scanf("%d", &no);

		counter=0;
		fact=1;
		while(counter<no)
		{
			++counter;//counter= counter+1;
			printf("%4d", counter);
			if(counter<no)
				printf(" * ");
			fact*=counter;//fact= fact*counter;
		}
		printf(" =%d", fact); */

	}

	{
		// 3. count no of digits
	/*	int counter, no;

		printf(" \n Enter No :: ");
		scanf("%d", &no);
		printf("\n no=%d", no);
		counter=0;
		while(no!=0)
		{
			no/=10;//no=no/10;
			counter++;
		}
		printf("\n no of digits =%d", counter);
	*/

	}
	{
	 //  sum of digits

	 /*	int no, rem, sum;
		printf("\n Enter No :: ");
		scanf("%d", &no);
		printf("\n no=%d\n ", no);

		rem=sum=0;
		while(no!=0)
		{
			rem= no%10;
			no/=10;   // no=no/10;
			sum+=rem; //sum=sum=rem;
		}
		printf("\n sum of digits =%d", sum);
	*/
	}
	{
		int rem ,no, rev;
		printf("\n Enter No :: ");
		scanf("%d", &no);

		printf("\n no=%d\n ", no);
		rev=rem=0;
		while(no!=0)
		{
			rem= no%10;
			no/=10;
			rev= rev*10 + rem;
		}
		printf("\n rev =%d", rev);

	}



	return 0;
}
