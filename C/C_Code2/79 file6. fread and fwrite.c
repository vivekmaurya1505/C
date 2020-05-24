#include<stdio.h>
#pragma pack(1)
struct emp
{
	int empno;
	char name[10];
	float sal;
};
void AcceptEmpInfo(struct emp *e);
void PrintEmpInfo(const struct emp *e);
void WriteDataIntoBinaryFile();
void ReadDataFromBinaryFile();
int MenuChoice();
int main()
{
	int choice;

	do
	{
		choice=MenuChoice();

		switch(choice)
		{
		default : printf("\n Invalid Choice:: ");
				 continue; // break;
			case 1:// write record
					WriteDataIntoBinaryFile();
					break;
			case 2: // read record from file
					ReadDataFromBinaryFile();
					break;
			case 0: // exit
					return 0; // exit(0);
		}

		printf("\n Enter 1 to Contine or 0 to Exit ::");
		scanf("%d", &choice);

	}while(choice!=0);
	return 0;
}

void ReadDataFromBinaryFile()
{
	struct emp e1;
	int cnt=0;
	FILE * fpEmpRead=NULL;

	if( (fpEmpRead=fopen("/home/rahul/P75/empinfo.dat", "rb"))==NULL)
		printf("\n Unable to read file");
	else
	{

		// read 1st record from file
		/*===================================
		printf("\n EmpNo   Name    sal \n");
		cnt=fread(&e1, sizeof(struct emp), 1, fpEmpRead);
		//fread will read data from binary file

		//fscanf(fpEmpRead, "%d\t%s\t%f\n", &e1.empno, e1.name, &e1.sal);
		//fsanf will read data from text file

		PrintEmpInfo(&e1); // print e1 on console
	===================================*/

		// to read all records for text file
		/*printf("\n EmpNo   Name    sal \n");
		while( fscanf(fpEmpRead, "%d\t%s\t%f\n", &e1.empno, e1.name, &e1.sal)!=EOF)
		{
			cnt++;
			PrintEmpInfo(&e1);
			//getchar();
		}
		*/
		// to read all records for binary file
		printf("\n EmpNo   Name    sal \n");
		while(fread(&e1, sizeof(struct emp), 1, fpEmpRead) )
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
void WriteDataIntoBinaryFile()
{
	struct emp e1;
	FILE *fpEmpWrite=NULL;

	//fpEmpWrite=fopen("c:\\rahul\\P75\\empinfo.dat", "ab"); in window
	fpEmpWrite=fopen("/home/rahul/P75/empinfo.dat","ab"); // linux
	if(fpEmpWrite==NULL)
		printf("\n Unable to open file...");
	else
	{
		AcceptEmpInfo(&e1); // scan data for emp

		//fprintf(fpEmpWrite,"%d\t%s\t%f\n", e1.empno, e1.name, e1.sal);
		// fprint will write data in to text file

		fwrite(&e1, sizeof(struct emp), 1, fpEmpWrite);
		// fwrite will write data in to binay file

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
int MenuChoice()
{
	int choice;
	printf("\n 1. Add New Record in Binary file");
	printf("\n 2. Print all Records from Binary file \n 0. Exit \n");
	printf("\n Enter Your Choice:: ");
	scanf("%d", &choice);

	return choice;
}
