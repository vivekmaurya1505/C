#include<stdio.h>
#include<stddef.h>
struct account{
	char ch;
	int i;
	float f;
	char name[15];
}a;

int main(){
            
	printf("%d\n",sizeof(struct account));
	printf("offset ch%d\n",offsetof(struct account,ch));
	printf("offset i%d\n",offsetof(struct account,i));
	printf("offset f%d\n",offsetof(struct account,f));
	printf("offset name%d\n",offsetof(struct account,name));
	printf("add of ch=%u,i=%u ",&a.ch,&a.i );

}
