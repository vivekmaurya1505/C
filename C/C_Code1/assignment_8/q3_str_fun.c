#include<stdio.h>



int main()
{
	int n,m;
	char a[15]="hello abgl";
	char b[15]="world";
	char c[30]="good morning";
	char d[30]="morning";
	char e[30]="good";
	
/*	strncpy(a,b,8);
	printf("\nafter strncpy : %s\n",a);
	strncpy(c,b,5);
	printf("after strncpy : %s\n",c);

	strncat(a,b,3);
	printf("\nafter strncat : %s\n",a);
	strncat(c,b,7);
	printf("after strncat : %s\n",c);
	
	n=strncmp(b,a,4);
	printf("\nafter strncmp : %d\n",n);
	m=strcmp(c,b);
	printf("after strncmp : %d\n",m);

	n=strcasecmp(c,e);
 	printf("\nafter strcasecmp : %d\n",n);
	m=strcasecmp(c,e);
	printf("after strcasecmp : %d\n",m);
	

	n=strncasecmp(c,e,6);
	printf("\nafter strncasecmp : %d\n",n);
	m=strncasecmp(c,b,6);
	printf("after strncasecmp : %d\n",m);

	n=strchr(c,'o');
	printf("\nafter strchr : %d\n",n);
	m=strchr(b,'l');
	printf("after strchr : %d\n",m);


	n=strrchr(c,'o');
	printf("\nafter strrchr : %d\n",n);
	m=strrchr(b,'l');
	printf("after strrchr : %d\n",m);


	n=strstr(c,e);
	printf("\nafter strstr : %d\n",n);
	m=strstr(c,d);
	printf("after strstr : %d\n",m);
	return 0;
	


	n=strtok(c,e);
	printf("\nafter strtok : %d\n",n);
	m=strtok(c,b);
	printf("after strtok : %d\n",m);
*/
	n=sprintf(c,e);
	printf("\nafter sprintf : %d\n",n);
	m=strtok(c,b);
	printf("after sprintf : %d\n",m);
	
	

}

