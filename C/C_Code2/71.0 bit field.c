#include<stdio.h>
#pragma pack(1)
// bit field
struct emp
{
	int empno;
	char empname[10];
	float sal;
	unsigned comp:4;
	//signed comp:4;
	unsigned mobile:5;
	signed car:5;
};
struct date
{
	int dd,mm, yy;
};
struct date1
{
	short int dd,mm, yy;
};
struct date2
{
	signed dd:6;
	signed mm:5;
	signed yy:12;
};
struct date3
{
	unsigned dd:5;
	unsigned mm:4;
	unsigned yy:11;
};



int main()
{

	struct emp e1={1, "abc", 12000,1,1,1};
	int no;
	printf("\n size of e1=%d", sizeof(e1));

	printf("\n %d %s %.2f %d %d %d", e1.empno, e1.empname, e1.sal, e1.comp, e1.mobile, e1.car);
	e1.comp==1 ? printf("\n hava a computer") : printf("\n dont have comp");

	printf("\n Enter 1 for having comp or 0. Not having comp ");
//	scanf("%d", &e1.comp); // error as we can not scanf bit field
	scanf("%d", &no);
	e1.comp=no;
	e1.comp==1 ? printf("\n hava a computer") : printf("\n dont have comp");

	printf("\n e1.comp=%d", e1.comp);

	printf("\n size of struct date =%d ", sizeof(struct date));
	printf("\n size of struct date1 =%d ", sizeof(struct date1));
	printf("\n size of struct date2 =%d ", sizeof(struct date2));
	printf("\n size of struct date3 =%d ", sizeof(struct date3));


	for( no=0; no<=100; no++)
	{
		e1.comp=no;
		printf("\n no=%d e1.comp=%d ", no, e1.comp);
	}
    return 0;
}
