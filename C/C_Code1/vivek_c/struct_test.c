#include<stdio.h>
//#pragma pack(4)
struct name{
	 char a;      //1
	 int b;       //4
	 char v;
	double   c;    //8
	 char d;      //1
	short e;      //2
       int f;
char g;       //4
 //     struct name *p;        //1
};
int main()
{
	struct name p;

printf("==%d\n",sizeof(p));
printf("char--a=%u\n",&p.a);

printf("int--b=%u\n",&p.b);

printf("char--v=%u\n",&p.v);
printf("double--c=%u\n",&p.c);

printf("char--d=%u\n",&p.d);

printf("short--e=%u\n",&p.e);

printf("int--f=%u\n",&p.f);

printf("char--g=%u\n",&p.g);
return 0;
}
