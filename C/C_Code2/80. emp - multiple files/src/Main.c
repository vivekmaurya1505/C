#include<stdio.h>
#include"../include/emp.h"
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
