#include <stdio.h>
int main(void)
{
	//1. factors
	/*int counter,no;

	printf("\n Enter No :: ");
	scanf("%d", &no);
	counter=0;
	while(counter<no)
	{
		  ++counter; // counter=counter+1;
		  if( no%counter==0)
		  {
			  printf("%5d", counter);

		  }
	}*/

	{
		// prime
	/*	int no, counter, nooffactors;

		printf("\n Enter No :: ");
		scanf("%d", &no);

		counter=nooffactors= 0;
		while(counter<no)
		{
			counter++;
			if(no%counter==0)
				printf("%d] %d\n",++nooffactors, counter);
		}
		if(nooffactors==2)
			printf("\n%d is prime", no);
		else
			printf("\n%d is not prime", no);
	*/
	}
	{
		int counter, no;

		printf("Enter No :: ");
		scanf("%d", &no);

		for(counter=2; counter<no; counter++)
		{
			if(no%counter==0)
				break; // to go out of loop
		}

		printf("\n counter=%d\n", counter);

		if(no== counter)
			printf("%d is prime ", no);
		else
			printf("%d is not prime", no);


	}


	return 0;
}
