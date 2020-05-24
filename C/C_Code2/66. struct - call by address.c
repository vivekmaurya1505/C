#include<stdio.h>
#pragma pack(1)
struct emp
{
	// variables or data member
	int empno;
	char name[10];
	float sal;
};
void AcceptEmpInfo(struct emp *e); // 4 bytes as e is pointer
//void PrintEmpInfo(struct emp e); // 18 bytes as e is variable of struct emp
void PrintEmpInfo(const struct emp *e); // 4 bytes as e is pointer
int main(void)
{
	struct emp e1;

	printf("\n Enter data for emp::");
	printf("\n in main &e1=%u\n", &e1);
	AcceptEmpInfo(&e1); // e1 actual argument

	printf("\n EmpInfo :: in main\n ");
	PrintEmpInfo(&e1);

	return 0;
}
// e formal argument
void AcceptEmpInfo(struct emp *e)
{
	printf("\n in accept  e=%u\n", e);
	printf("\n Enter Emp no :: ");
	scanf("%d", &e->empno);
	printf("\n Enter Emp Name::");
	scanf("%s", e->name);
	printf("\n Enter Emp Salary ::");
	scanf("%f", &e->sal);
	return;
}
void PrintEmpInfo(const struct emp *e)
{
	//e->sal=-10000;
	printf("\n in Print  e=%u\n", e);
	printf("\n Empno\t Name\t Salary using struct variable e \n ");
	printf("%-8d%-10s%6.2f", e->empno, e->name, e->sal);
	return;
}
