#include<stdio.h>
int str_cmp(char *,const char*);
int main(){

	char src[10];
	char dest[10];
	printf("\n Enter a source string ");
	scanf("%s",src);

	printf("\n Enter a destination string ");
	scanf("%s",dest);
	str_cmp(dest,src);
	return 0;
}
int str_cmp(char *dest,const char *src){
	while(*dest!=0 || *src!=0){
		if(!(*dest-*src)){
			dest++;
			src++;
		}
		else{
			printf("\\nstring not equal\n");
			return 0;
		}
	}	
	printf("\\nstring equal\n");
}
