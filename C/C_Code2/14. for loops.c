#include <stdio.h>
int main()
{
	int no, counter;

	printf("\n Enter No :: ");
	scanf("%d", &no);

	// 1 to no
	/*for( counter=1 ; counter<=no; ++counter)
	{
		printf("%5d", counter);
		if( counter%10==0)
			printf("\n");
	}*/
	// no to 1
	/*for( counter=no; counter>=1; counter--)
	{
		printf("%5d", counter);
		if( counter%10==0)
			printf("\n");
	}*/

	// 1 to no
	/*counter=1 ;
	for(  ;  ; )
	{
		if(counter>no)
			break;
		printf("%5d", counter);
		if( counter%10==0)
				printf("\n");
		++counter;
	}*/
	/*
	for( counter=1 ; counter<=no; ++counter); // it  print last value
	{
			printf("%5d", counter);
			if( counter%10==0)
				printf("\n");
	}*/


	for( counter=1 ; counter<=no; );  // infinite loop
	{
		printf("%5d", counter);

		if( counter%10==0)
			printf("\n");
	}
	printf("end");
	return 0;
}
