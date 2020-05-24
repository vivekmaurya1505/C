#include<stdio.h>
void str_cpy(char *,const char*);

void str_n_cpy(char *,const char *,int );
int main(){
	int n;
	char src[10];
	char dest[11];
	printf("\n Enter a source string ");
	scanf("%s",src);

	printf("\n Enter a destination string ");
	scanf("%s",dest);
	printf("\nEnter a number from where you want to copy string to destination ");
	scanf("%d",&n);
	str_n_cpy(dest,src,n);
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
void str_n_cpy(char *dest,const char *src,int no){
	int i=0;
	while(no>i++){
		dest++;
	}

	str_cpy(dest,src);

}
