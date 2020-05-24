#include <stdio.h>
int main(void)
{
	int a, b,c, counter=0;
	for( a=1; a<=10; a++)
	{
		for( b=a+1; b<=10; b++)
		{
			for( c=b+1; c<=10; c++)
			{
				if ( c*c==  a*a + b*b )
				{
					printf("\n %d * %d + %d * %d == %d * %d",a,a,b,b,c,c);
				}
				counter++;
			}
		}
	}
	printf("\n counter=%d", counter);
	return 0;
}
