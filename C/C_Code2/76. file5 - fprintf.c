#include<stdio.h>
struct emp
{
	int empno;
	char name[10];
	float sal;
};
void AcceptEmpInfo(struct emp *e);
void WriteDataIntoTextFile();
int main()
{
	WriteDataIntoTextFile();
	return 0;
}
void WriteDataIntoTextFile()
{
	struct emp e1;
	FILE *fpEmpWrite=NULL;

	//fpEmpWrite=fopen("c:\\rahul\\P75\\empinfo.txt", "a"); in window
	fpEmpWrite=fopen("/home/rahul/P75/empinfo.txt","a"); // linux
	if(fpEmpWrite==NULL)
		printf("\n Unable to open file...");
	else
	{
		AcceptEmpInfo(&e1); // scan data
		fprintf(fpEmpWrite,"%d\t%s\t%f\n", e1.empno, e1.name, e1.sal);
		// write data in to file
		fclose(fpEmpWrite);
		printf("\n record is added to file ");
	}
	return;
}
void AcceptEmpInfo(struct emp *e)
{
	printf("\n Enter Emp No :: ");
	scanf("%d", &e->empno);
	printf("\n Enter Emp Name :: ");
	scanf("%s", e->name);
	printf("\n Enter Emp Sal :: ");
	scanf("%f", &e->sal);
	return;
}
