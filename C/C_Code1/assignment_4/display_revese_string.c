#include<stdio.h>
#define size 5
void str1(char st[],int size1)
{

	for(int i=size1;i>=0;i--)
	{
	printf("\n%c",st[i]);
}


}
int main()
{

	char str[size];
	printf("\nEnter %d no of string ",size);
	
	scanf("%s",str);


return 0;
}
