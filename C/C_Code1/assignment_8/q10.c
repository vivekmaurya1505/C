#include<stdio.h>
#include<string.h>



//convert into ASCII
int main(){
int i=0;
unsigned int result=0;
char s[8]="ABCD";
while(s[i]!='\0')
{
result=(int)s[i]+result;
i++;
}

printf("The integer value of %s = %d\n", s, result);
return 0;

}
