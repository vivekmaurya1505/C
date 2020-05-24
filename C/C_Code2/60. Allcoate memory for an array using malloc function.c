#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ptr=NULL, i, no;

	printf("\n Enter How many elements u want :: ");
	scanf("%d", &no);

	ptr= (int*)malloc(sizeof(int)*no);
	//ptr= (int*)calloc(sizeof(int), no);
	if(ptr==NULL)
		printf("\n unable to allocate memory ...");
	else
	{
		printf("\n ptr=%u &ptr=%u", ptr, &ptr);

		printf("\n Enter eleemnts of Array :: ");
		for(i=0; i<no; i++)
		{
			printf("\n ptr[%d] = ", i);
			//scanf("%d", &ptr[i]); // array notations
			//scanf("%d", &i[ptr]);
			//scanf("%d", (ptr+i)); // pointer notation
			scanf("%d", (i+ptr));
		}

		for(i=0; i<no; i++)
		{
			//printf("\n ptr[%d] %d [%u] ::", i, ptr[i],&ptr[i]);// array notations
			//printf("\n ptr[%d] %d [%u] ::", i, i[ptr],&i[ptr]);
			//printf("\n ptr[%d] %d [%u] ::", i, *(ptr+i), (ptr+i));
			printf("\n ptr[%d] %d [%u] ::", i, *(i+ptr), (i+ptr));
		}
		free(ptr);
		ptr=NULL;
		printf("\n Memory is freed ");
	}

	return 0;
}
