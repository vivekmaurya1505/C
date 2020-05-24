#include <stdio.h> 
#include <string.h> 
  
int main () 
{ 
	char str1[] = "Something";   
	char str2[] = "Nothing";   

	puts("str1 before memcpy "); 
	puts(str1); 
	memcpy (str1, str2, sizeof(str2)); 
	puts("\nstr1 after memcpy "); 
	puts(str1); 

	char str3[15];
	char str4[15];
	int ret;
	memcpy(str3, "abcdef", 6);
	memcpy(str4, "ABCDEF", 6);
	ret = memcmp(str3, str4, 5);
	if(ret > 0) 
	{
		printf("str4 is less than str3");
	} 
	else if(ret < 0) 
	{
      		printf("str3 is less than str4");
   	}	
       	else 	
	{
      		printf("str3 is equal to str4");
   	}

	char str5[50];
	strcpy(str5,"This is string.h library function");
	puts(str5);
	memset(str5,'$',7);
	puts(str5);	

  	return 0;	
} 
