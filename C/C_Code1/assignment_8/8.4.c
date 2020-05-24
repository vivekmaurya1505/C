#include<stdio.h>
#include<stdlib.h>
void main()
{
	/*char str[10]="abcdefghi";
	char *ptr;long ret;
	ret=strtol(str,ptr,10);
	printf("\n atoi(str)=%d",atoi(str));
	printf("\n strtoimax(str)=%u",strtoimax(str));
	printf("\n strtol(str)=%s",*ptr);
	printf("\n strtol ka return=%ld",ret);
	printf("\n strtof(str)=%f",strtof(str));*/
	char str[30] = "2030300 This is test";
   char *ptr;
   long ret;

   ret = strtol(str, &ptr, 10);
   printf("The number(unsigned long integer) is %ld\n", ret);
   printf("String part is |%s|", ptr);
}
