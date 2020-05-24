#include<stdio.h>
int main()
{
	FILE *fpWrite=NULL;
	char ch;

	fpWrite=fopen("file1.txt", "w");
	//fpWrite=fopen("file1.txt", "a");
	if( fpWrite==NULL)
		printf("\n Unable to open file for writing...");
	else
	{
		while( (ch=fgetc(stdin))!=EOF)
		{
			fputc(ch, fpWrite);
		}
		fclose(fpWrite);
		printf("\n Data added to file");
	}

    return 0;
}
