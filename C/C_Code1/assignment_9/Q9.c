/*
 union A
{
int x;
float y;
double z;
int arr[2];
}a1;
a1.y=6.25f;
printf(“x=%x\n”,a1.x);
a1.z=0.15625;;
printf(“%x%x\n”,a1.arr[1],a1.arr[0]);

union B
{
int x;
short int y;
char ch;
char carr[4];
}b1;
b1.x=0x41424344;
Analyse the values of b1.y, b1.ch, print all elements of b1.carr
Modify b1.y or b1.ch and check the value of b1.x
 */

#include<stdio.h>
union A
{
	int x;
	float y;
	double z;
	float arr[2];
}a1;

union B
{
	int x;
	short int y;
	char ch;
	char carr[4];
}b1;

int main(){

	a1.y=6.25f;

	printf("x=%x\n",a1.x);

//	a1.z=0.15625;;

	printf("x=%x\n",a1.z);
	printf("%x\n%x\n",a1.arr[1],a1.arr[0]);
	printf("x=%x\n",a1.y);
	


	b1.x=0x41424344;



	printf("\n union size =%d",sizeof(a1));

	printf("\n union size =%d",sizeof(b1));
}

