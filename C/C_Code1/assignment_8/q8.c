#include<stdio.h>
#include<string.h>
int main()
{
char name[50];
char name1[50]="pooja";

printf("The final string is %s\n",memcpy(name,name1,5));


return 0;
}

