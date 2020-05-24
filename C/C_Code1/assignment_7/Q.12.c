/*Q 12. Passing function names as parameters
void test(int x, int y, int (*fp) (int,int))
{
int z = fp(x,y);
----
}
test(10,20,sum);
*/
#include<stdio.h>
int fp(int,int);
void test(int, int, int (*fp) (int,int));
void main(){

//	int (*sum)(int int;
//	int x=5,y=2;
//	sum=add;
	test(10,20,fp);
	
}

void test(int x, int y, int (*fp) (int,int)){
int z = fp(x,y);
printf("==%d",z);

}

int fp(int x,int y){
	x=x+y;
	return x;
}
