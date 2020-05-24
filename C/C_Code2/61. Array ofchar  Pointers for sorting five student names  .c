#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NO 5
void PrintNames(const char *n[], int no);
int main(void)
{
	char *arr[NO], name[20], *temp=NULL;
	int i, j;

	for(i=0; i<NO; i++)
	{
		printf("\n Enter Name :: ");
		gets(name);
		arr[i]= malloc( (strlen(name)+1)* sizeof(char)); //allocate memory
		strcpy(arr[i],name);// copy name
	}

	printf("\n before sort \n");
	PrintNames(arr, NO);
	/*for(i=0; i<NO; i++)
	{
		printf("\n &arr[%d]=%u arr[%d]=%u arr[%d]=%-10s *arr[%d]=%c", i, &arr[i], i, arr[i], i, arr[i], i, *arr[i]);
	}*/

	//selection sort
	for(i=0; i<NO; i++)
	{
		for(j=i+1 ; j<NO; j++)
		{
			if(strcmp(arr[i], arr[j])>0)
			{
				temp= arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	printf("\n After sort \n");
/*	for(i=0; i<NO; i++)
	{
		printf("\n &arr[%d]=%u arr[%d]=%u arr[%d]=%-10s *arr[%d]=%c", i, &arr[i], i, arr[i], i, arr[i], i, *arr[i]);
	}*/
	PrintNames(arr, NO);
	for(i=0; i<NO; i++)
	{
		free(arr[i]);
		arr[i]=NULL;
	}
	printf("\n memeory is freed...");

	return 0;
}
void PrintNames(const char *n[], int no)
{
	int i;
	for(i=0; i<no; i++)
	{
		printf("\n &arr[%d]=%u arr[%d]=%u arr[%d]=%-10s *arr[%d]=%c", i, &n[i], i, n[i], i, n[i], i, *n[i]);
	}
	return;
}
