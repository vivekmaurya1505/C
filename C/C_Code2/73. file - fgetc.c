#include<stdio.h>

int main(void)
{
	FILE *fpRead=NULL;
	int cnt, lines, tabs, spaces, alphabets, digits;
	char ch;

	fpRead=fopen("file1.txt", "r");
	if( fpRead==NULL)
		printf("\n Unable to open file for reading...");
	else
	{
		cnt= lines= tabs= spaces= alphabets= digits=0;

		while( (ch=fgetc(fpRead))!=EOF)
		{
			cnt++;
			fputc(ch, stdout);

			if(ch=='\n')
				lines++;
			else if(ch=='\t')
				tabs++;
			else if(ch==' ')
				spaces++;
			else if((ch>=65 &&ch<=90 ) || (ch>=97 && ch<=122))
				alphabets++;
			else if(ch>=48 &&ch<=57  )
					digits++;
		}

		fclose(fpRead);
		printf("\n Data read from  file :: \n");

		printf("\n no of char =%d", cnt);
		printf("\n no of lines =%d", lines);
		printf("\n no of tabs =%d", tabs);
		printf("\n no of spaces =%d", spaces);
		printf("\n no of alphabets =%d",alphabets);
		printf("\n no of digits =%d",digits);
	}

    return 0;
}
