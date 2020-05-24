#include<stdio.h>
#define SIZE 6
int main()
{
	FILE *fpRead=NULL;
	char arr[SIZE];


	fpRead=fopen("file1.txt", "r");
	if( fpRead==NULL)
		printf("\n Unable to read file...");
	else
	{
		while( fgets(arr, SIZE, fpRead)!=NULL)
		{
			fputs(arr, stdout);
			getchar();
		}
		fclose(fpRead);
		printf("\n Data added to file");
	}

    return 0;
}
