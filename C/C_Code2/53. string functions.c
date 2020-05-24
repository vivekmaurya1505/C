#include <stdio.h>
#include<string.h>
#define LEN 40
int MenuOperations();
int main( void )
{
	char src[LEN],dest[LEN], *ptr=NULL, find;
	int choice, ans1;
	unsigned int ans;
	do
	{
		choice= MenuOperations();
		if(choice>=1 && choice<=2)
		{
			printf("\n enter src :: ");
			scanf("%*c");//getchar();
			gets(src);
		}
		else if(choice>=3 && choice<=7)
		{
			printf("\n enter src :: ");
			scanf("%*c");
			gets(src);
			printf("\n enter dest :: ");
			gets(dest);
		}


		switch(choice)
		{
			case 1: //string length
					ans= strlen(src);
					printf("\n length of %s  is %d", src, ans);
					break;
			case 2 :// serach char in string
					printf("\n Enter Char to search :: ");
					scanf("%c", &find);
					ptr= strchr(src, find);
					if(ptr==NULL)
						printf("%c is not found in %s", find, src);
					else
						printf("%c is  found in %s at  %d position", find, src, ptr-src);
					break;
			case 3:// string copy
					ptr= strcpy(dest, src);
					//strcpy(dest, src);
					printf("\n using out parameter dest =%s",dest );
					printf("\n using return statement= %s ",ptr );
					break;
			case 4: // string concate
					ptr= strcat(dest, src);
					printf("\n using out parameter dest =%s",dest );
					printf("\n using return statement= %s ",ptr );
					break;
			case 5:// string compare
					ans1=strcmp(src, dest);
					if(ans1>0)
						printf("%s is bigger than %s ", src,dest );
					else if( ans1<0)
						printf("%s is smaller than %s ", src ,dest );
					else if(ans1==0)
						printf("%s is equal to %s ", src ,dest );

					break;
			case 6:// string compare by ignoring case
					ans1=strcasecmp(src, dest);
					if(ans1>0)
						printf("%s is bigger than %s ", src,dest );
					else if( ans1<0)
						printf("%s is smaller than %s ", src ,dest );
					else if(ans1==0)
						printf("%s is equal to %s ", src ,dest );
					break;
			case 7:// search sub string in string
					ptr= strstr(src, dest);
					if( ptr==NULL)
						printf("%s is not found  in %s", dest, src);
					else
						printf("%s is found  in %s at %d location", dest, src, ptr-src );
					break;
		}

	    //char *strstr(const char *string, const char *substring);

		printf("\n Enter 1 to continue or 0 to Exit :: ");
		scanf("%d", &choice);

	}while(choice!=0);
	return 0;
}

int MenuOperations()
{
	int choice;
	printf("\n 1. strlen \n 2. strchr \n 3. strcpy \n 4. strcat ");
	printf("\n 5. strcmp \n 6. stcasecmp / strcmpi \n 7. strstr \n 0. Exit  \n");

	printf("\n Enter Your Choice :: ");
	scanf("%d", &choice);

	return choice;
}

// return 10; // int
// return 10.2; // double
// return "sunbeam"; char*

