#include<stdio.h>
typedef struct test{
	int a;
	char ch;
	float f;
}TEST;
int main(){

	TEST s={1,'a',1.7};
	TEST *ptr;
	ptr=&s;

printf("\n a=%d ch=%d,f=%f",s.a,s.ch,s.f);
printf("\n a=%d ch=%d,f=%f",ptr->a,ptr->ch,ptr->f);

printf("\n a=%d ch=%d,f=%f",(*ptr).a,(*ptr).ch,(*ptr).f);
}
