#include <stdio.h>
#define SIZE 40
int main(int argc, char *argv[],char *envp[])
{
	char ch;
	FILE *fpRead=NULL, *fpWrite=NULL;
	printf("\n no fo arg =%d\n", argc);
	if(argc!=3)
	{
		printf("\n Invalid Arguments ");
		printf("\n FileName pathSrcFile pathDestFile");
	}
	else
	{
		if( (fpRead=fopen(argv[1], "r"))==NULL)
			printf("\n unable to open file for reading");
		else
		{
			if(  ( fpWrite=fopen(argv[2], "w"))==NULL)
				printf("unable to open file for writing");
			else
			{
				  while((ch=fgetc(fpRead))!=EOF)
				  {
					  fputc(ch, fpWrite); // write into file2
					  fputc(ch, stdout);  // print on console
				  }
				  //fcloseall();
				  fclose(fpRead);
				  fclose(fpWrite);
				  printf("\n data copied from %s to %s", argv[1], argv[2]);
			}
		}
	}
	return 0;
}
