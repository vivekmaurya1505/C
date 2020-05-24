#include <stdio.h>
#include<string.h>
#define LEN 40
int main( void )
{
	char src[LEN], del;
	int i, j;
	printf("\n Enter String :: ");
	gets(src);
	printf("\n Enter char to delete :: ");
	scanf("%c", &del);

	for( i=0; src[i]!='\0'; i++)
	{
		if(src[i]==del)
		{
			j=i;
			while(src[j]!='\0')
			{
				src[j]= src[j+1];
				j++;
			}
			i--;
		}
		//printf("\n src =%s", src);
	}

	printf("\n src =%s", src);
	return 0;
}
