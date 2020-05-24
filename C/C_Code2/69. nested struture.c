#include<stdio.h>
#pragma pack(1) // structure member alignment as 1 byte
/*struct date
{
	int dd, mm, yy;
};
struct emp
{
	int empno;
	char name[10];
	float sal;
	struct date dob;
};*/
struct emp
{
	int empno;
	char name[10];
	float sal;
	struct date
	{
		int dd, mm, yy;
	}dob;

};

int main(void)
{
	struct emp e1;
	printf("\n Enter data for emp:: ");
	printf("\n Enter Emp no ::");
	scanf("%d", &e1.empno);
	printf("\n Enter Emp Name::");
	scanf("%s", e1.name);
	printf("\n Enter Emp Salary ::");
	scanf("%f", &e1.sal);
	printf("\n Enter Doj in dd-mm-yy format :: ");
	scanf("%d%*c%d%*c%d", &e1.dob.dd, &e1.dob.mm, &e1.dob.yy);


	printf("\n size of e1=%d", sizeof(e1));


	printf("\n Empno\t Name\t Salary \t dob using struct variable e1 \n ");
	printf("%-8d%-10s%6.2f\t %d-%d-%d", e1.empno, e1.name, e1.sal, e1.dob.dd,e1.dob.mm, e1.dob.yy);


	return 0;
}
