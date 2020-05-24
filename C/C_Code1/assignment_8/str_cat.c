#include<stdio.h>
void str_cat(char *,const char*);

int main(){
	int n;
	char src[10];
	char dest[20];
	printf("\n Enter a source string ");
	scanf("%s",src);

	printf("\n Enter a destination string ");
	scanf("%s",dest);
	str_cat(dest,src);
	printf("\n copied string=%s",dest);
	return 0;
}
void str_cat(char *dest,const char *src){
	while(*dest!=0){
		dest++;
	}
	while(*src!=0){
		*dest=*src;
		dest++;
		src++;

	}	
	*dest=0;


}
