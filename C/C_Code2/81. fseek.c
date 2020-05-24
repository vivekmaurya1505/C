#include <stdio.h>
int main()
{
	FILE *fpRead=NULL;
	char ch;

	fpRead= fopen("file1.txt", "r");
	if(fpRead==NULL)
		printf("\n unable tp open file");
	else
	{
	//fseek(fpRead,-5,SEEK_END); 
		//ch=fgetc(fpRead);
		//printf("%c%d", ch, ch);



		//fseek(fpRead, 0L, 2);//goto end of file
		fseek(fpRead, -1L,SEEK_END); // go to last char
		do
		{
			//printf("%d\n",ftell(fpRead));
			ch=fgetc(fpRead);
			// for window
			//if(ch=='\n')
				//fseek(fpRead, -1L, SEEK_CUR);

			printf("%c", ch);
			//printf("%d\n",ftell(fpRead));
			//getchar();

		}while(!fseek(fpRead, -2L, SEEK_CUR));

	}



	return 0;
}
