#include<stdio.h>
#include<string.h>

int main(){

struct A{

	int x;
	char str[20];
};

struct A a1 = {101,"ab"},a2;
a1.x=10;
strcpy(a1.str,"hello");
printf("Value of string = %s\n",a1.str);

return 0;
}
