#include<stdio.h>
#pragma pack(1)
struct emp
{
	// variables or data member
	int empno;
	char name[10];
	float sal;
};
struct emp e1;
void AcceptEmpInfo(void);
void PrintEmpInfo(void);
int main(void)
{


	printf("\n Enter data for emp::");
	printf("\n in main &e1=%u\n", &e1);
	AcceptEmpInfo();

	printf("\n EmpInfo :: \n ");
	PrintEmpInfo();

	return 0;
}
void AcceptEmpInfo(void)
{
	printf("\n in accept  &e=%u\n", &e1);
	printf("\n Enter Emp no :: ");
	scanf("%d", &e1.empno);
	printf("\n Enter Emp Name::");
	scanf("%s", e1.name);
	printf("\n Enter Emp Salary ::");
	scanf("%f", &e1.sal);


	return;
}
void PrintEmpInfo(void)
{
	printf("\n in Print  &e=%u\n", &e1);
	printf("\n Empno\t Name\t Salary using struct variable e1 \n ");
	printf("%-8d%-10s%6.2f", e1.empno, e1.name, e1.sal);
	return;
}
