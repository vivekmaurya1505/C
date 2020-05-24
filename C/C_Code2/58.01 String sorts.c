#include <stdio.h>
#define NO 5
#define LEN 10

int main(void)
{
	char names[NO][LEN], temp[LEN];
	int i, j;

	printf("\n Enter Names :: ");
	for(i=0; i<NO; i++)
	{
		printf("\n Enter names[%d]", i);
		scanf("%s", &names[i]);
	}

	printf("\n before swap names are :: ");
	for( i=0; i<NO; i++)
	{
		printf("\n %d] %s [%u]", i, names[i], &names[i]);
	}

	//select sort Asc
	/*for(i=0; i<NO; i++)
	{
		for(j=i+1; j<NO; j++)
		{
			printf("\n names[%d]%s names[%d] %s", i, names[i], j, names[j]);
			if( strcmp(names[i], names[j])>0)
			{
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
		printf("\n pass %d\n", i+1);
	}*/

	// bubble sort desc
	for(i=0; i<NO; i++)
	{
		for(j=0; j<NO-i-1; j++)
		{
			printf("\n names[%d]%s names[%d] %s", j, names[j], j+1, names[j+1]);
			if( strcmp(names[j], names[j+1])<0)
			{
				strcpy(temp, names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1], temp);
			}
		}
		printf("\n pass %d\n", i+1);
	}


	printf("\n names after swap  :: ");
	for( i=0; i<NO; i++)
	{
		printf("\n %d] %s [%u]", i, names[i], &names[i]);
	}


	return 0;
}
