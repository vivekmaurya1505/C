#include<stdio.h>
#define size 5
void str1(char st[],int size1)
{

	if(size1>0)
	{
		size1--;	
	printf("%c",st[size1]);
		str1(st,size1);
	}
}

int main()
{

	char str[size];
	printf("\nEnter %d no of string ",size);
	
	scanf("%s",str);
	str1(str,size);

return 0;
}
