#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	char ch,ch1,c;
	printf("\n enter character\n");
	scanf("%c",&ch);
	//__fpurge(stdin);
	c=getc(stdin);
	scanf("%c",&ch1);
	printf("\n===%d===%d=====%d",ch,c,ch1);
return 0;
}
