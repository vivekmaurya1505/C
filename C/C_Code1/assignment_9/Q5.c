#include<stdio.h>
struct A
{
int x;
char str[20]; // (or) char str[20];
};
int main(){

struct A a1 = { 101, "abc" } , a2;
a1.x=10;
//a1.str[0]="hello"; //works?
scanf("%d%s",&a1.x,a1.str); //works?
a2 = a1; 

return 0;
}
