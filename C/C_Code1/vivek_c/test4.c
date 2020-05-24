#include<stdio.h>
int main()
{ int c;
c = getchar(stdin);
while(c != EOF)
{
	printf("\n abc");
putchar(c);
c = getchar();
}
return 0;
}
