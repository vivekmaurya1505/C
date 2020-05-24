#include<stdio.h>
struct emp
{
	int empno;
	char name[10];
	float sal;
};
void AcceptEmpInfo(struct emp *e);
void PrintEmpInfo(const struct emp *e);
void WriteDataIntoTextFile();
void ReadDataFromTextFile();
int main()
{
	WriteDataIntoTextFile();
	ReadDataFromTextFile();

	return 0;
}

void ReadDataFromTextFile()
{
	struct emp e1;
	int cnt=0;
	FILE * fpEmpRead=NULL;

	if( (fpEmpRead=fopen("/home/rahul/P75/empinfo.txt", "r"))==NULL)
		printf("\n Unable to read file");
	else
	{

		// read 1st record from file
		/*printf("\n EmpNo   Name    sal \n");
		fscanf(fpEmpRead, "%d\t%s\t%f\n", &e1.empno, e1.name, &e1.sal);
		cnt++;
		PrintEmpInfo(&e1);
		*/

		// to read all records
		printf("\n EmpNo   Name    sal \n");
		while( fscanf(fpEmpRead, "%d\t%s\t%f\n", &e1.empno, e1.name, &e1.sal)!=EOF)
		{
			cnt++;
			PrintEmpInfo(&e1);
			//getchar();
		}
		fclose(fpEmpRead);
		printf("\n\n %d records read  from file", cnt);

	}
	return;

}
void PrintEmpInfo(const struct emp *e)
{
	printf("\%-8d%-10s%-6.2f \n", e->empno, e->name, e->sal);
	return;
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
