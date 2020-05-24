#include <stdio.h>
int main(void)
{
	int counter, no , upperlimit, lowerlimit;

	printf("\n Enter Lower limit :: ");
	scanf("%d", &lowerlimit);

	printf("\n Enter upper limit :: ");
	scanf("%d", &upperlimit);

	printf("\n prime no between %d to %d ::\n", lowerlimit, upperlimit);
	for(no=lowerlimit; no<=upperlimit; no++)
	{
		for(counter=2; counter<no; counter++)
		{
			if(no%counter==0)
				break; // to go out of loop
		}
		if(no== counter)
			printf("\n%d", no);
	}
	return 0;
}
