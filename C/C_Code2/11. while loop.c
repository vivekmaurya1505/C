#include <stdio.h>
int main()
{
	int no, counter;

	printf("\n Enter No :: ");
	scanf("%d", &no);
	// 1 to no
	/*counter=0; // init
	while(counter<no)
	{
		++counter;//counter++;//counter= counter+1;
		printf("%5d", counter);
		if( counter%10==0)
			printf("\n");
	}*/

	/*counter=no;
	while(counter>0)
	{
		printf("%5d", counter);
		--counter;//counter--; //counter= counter-1;
	}*/

	// 1 to no
	/*counter=0; // init
	while(1)
	{
		if(counter >= no)
			break; // out of loop

		++counter;//counter++;//counter= counter+1;
		printf("%5d", counter);

	}*/

	/*counter=0; // init
	while(counter<no);   // infinite loop
	{
		++counter;//counter++;//counter= counter+1;
		printf("%5d", counter);
		if( counter%10==0)
			printf("\n");
	}*/
	counter=0; // init
	while(counter<no && ++counter );   // not infinite loop
	{
		printf("%5d", counter);
		if( counter%10==0)
			printf("\n");
	}
	printf("\n stop");

	return 0;
}
