#include <stdio.h>
#define NO 5
#define LEN 10

int main(void)
{
	char names[NO][LEN];
	int i;

	printf("\n Enter Names :: ");
	for(i=0; i<NO; i++)
	{
		printf("\n Enter names[%d]", i);
		scanf("%s", &names[i]);
	}

	printf("\n names are :: ");
	for( i=0; i<NO; i++)
	{
		printf("\n %d] %s [%u]", i, names[i], &names[i]);
	}

	return 0;
}
