#include<stdio.h>
#pragma pack(1) // structure member alignment as 1 byte

struct emp
{
	// variables or data member
	int empno;
	char name[10];
	float sal;
}; // end of struct emp
int main(void)
{
	// struct emp is user defined data type
	//e1 variable of user defined data type struct emp
	//e1 will take memory (4+10+4)=18
	struct emp e1={100};
	struct emp *ptr=&e1;
	//struct emp e1;


	printf("\n Enter data for emp:: ");
	printf("\n Enter Emp no ::");
	scanf("%d", &e1.empno);
	printf("\n Enter Emp Name::");
	scanf("%s", e1.name);
	printf("\n Enter Emp Salary ::");
	scanf("%f", &e1.sal);


	printf("\n size of e1=%d", sizeof(e1));
	printf("\n size of ptr=%d", sizeof(ptr));

	printf("\n ptr=%u ptr+1=%u", ptr, ptr+1); // scale factor of pointer
	printf("\n &e1=%u &e1+1=%u", &e1, &e1+1);

	printf("\n Empno\t Name\t Salary using struct variable e1 \n ");
	printf("%-8d%-10s%6.2f", e1.empno, e1.name, e1.sal);

	printf("\n Empno\t Name\t Salary using pointer ptr \n ");
	printf("%-8d%-10s%6.2f", ptr->empno, ptr->name, ptr->sal);

	printf("\n Empno\t Name\t Salary using pointer ptr \n ");
	printf("%-8d%-10s%6.2f", (*ptr).empno, (*ptr).name, (*ptr).sal);

	return 0;
}
