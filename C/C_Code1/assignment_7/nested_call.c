//Try some nested calls    sqrt(pow(2,abs(x))), putchar(toupper(ch)) etc

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main(){

	int x=-2;
	char ch='a';
	printf("\n %lf",sqrt(pow(2,(abs(x)))));
	putc('a');
}
