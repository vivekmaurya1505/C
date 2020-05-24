#include<stdio.h>
#include<string.h>
void main()
{
	char a[]=" STRING EXAMPLE ONE ";
	char b[]="EXAMPLE TWO OF STRING ";
	char c[100]="lAST EXAMPLE";
	printf("\nALL ARRAYS : %s \n %s \n %s ",a,b,c);
	strncpy(c,a,5);
	printf("\nstrncpy(c,a): %s",c);
	strcat(c,b);
	printf("\nstrcat(c,b): %s",c); 
	int i=strcmp(a,b);
	printf("\nstrcmp(a,b): %d",i);
	//int j=strcasecmp(a,b);
	//printf("\nstrcasecmp(a,b): %d",j);
	//int k=strncasecmp(a,b);
	//printf("\nstrncasecmp(a,b): %d",k);
	printf("\nstrchr(c,a): %d",strchr(c,'A'));
	printf("\nstrrchr(c,e): %d",strrchr(c,'E'));
	/*printf("\nstrstr(b,'sample string'): %d",strstr(b,"OF"));
	char *token=strtok(c,b);
	while(token!=NULL)
	{
		printf("\n %s\n",token);
		token= strtok(NULL,c);
	}
	sprintf(c,"SOMETHING SOMETHING ");
	puts(c);*/
}
