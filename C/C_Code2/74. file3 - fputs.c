#include<stdio.h>
#define SIZE 40
int main()
{
	FILE *fpWrite=NULL;
	char arr[SIZE];

	//fpWrite=fopen("file1.txt", "w");
	fpWrite=fopen("file1.txt", "a");
	if( fpWrite==NULL)
		printf("\n Unable to open file for writing...");
	else
	{
		while( fgets(arr, SIZE, stdin)!=NULL)
		{
			fputs(arr, fpWrite);
		}
		fclose(fpWrite);
		printf("\n Data added to file");
	}

    return 0;
}
