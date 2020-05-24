#include<stdio.h>
#pragma pack(1)
struct emp
{
	// variables or data member
	int empno;
	char name[10];
	float sal;
};
void AcceptEmpInfo(struct emp e);
void PrintEmpInfo(struct emp e);
int main(void)
{
	struct emp e1;

	printf("\n Enter data for emp::");
	printf("\n in main &e1=%u\n", &e1);
	AcceptEmpInfo(e1);

	printf("\n EmpInfo :: \n ");
	PrintEmpInfo(e1);

	return 0;
}
void AcceptEmpInfo(struct emp e)
{
	printf("\n in accept  &e=%u\n", &e);
	printf("\n Enter Emp no :: ");
	scanf("%d", &e.empno);
	printf("\n Enter Emp Name::");
	scanf("%s", e.name);
	printf("\n Enter Emp Salary ::");
	scanf("%f", &e.sal);

	printf("\n Print In Accept \n");
	PrintEmpInfo(e);
	return;
}
void PrintEmpInfo(struct emp e)
{
	printf("\n in Print  &e=%u\n", &e);
	printf("\n Empno\t Name\t Salary using struct variable e \n ");
	printf("%-8d%-10s%6.2f", e.empno, e.name, e.sal);
	return;
}

