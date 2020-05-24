#include<stdio.h>
void str_cpy(char *,const char*);
int main(){
	char src[10];
	char dest[11];
	printf("\n Enter a string ");
	scanf("%s",src);
	str_cpy(dest,src);
	printf("\n copied string=%s",dest);
	return 0;
}
void str_cpy(char *dest,const char *src){
	while(*src!=0){
		*dest=*src;
		dest++;
		src++;

	}	
	*dest=0;

}
