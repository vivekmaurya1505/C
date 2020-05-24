#include <stdio.h>
#define SIZE 40
int main(void)
{
	FILE *fpRead=NULL;
	int cnt=0;
	char word[SIZE];
	if ((fpRead=fopen("/home/rahul/P75/file1.txt", "r"))==NULL)
		printf("unable to open file ");
	else
	{

		while( fscanf(fpRead,"%s",word )!=EOF)
		{
			printf("\n %d ] %s", ++cnt, word);
		}
		printf("\n  %d words read from file", cnt);
		fclose(fpRead);

	}
	return 0;
}
