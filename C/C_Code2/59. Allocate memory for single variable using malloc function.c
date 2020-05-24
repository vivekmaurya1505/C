#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ptr=NULL;
	ptr= (int*)malloc(sizeof(int)*1);
	if(ptr==NULL)
		printf("\n Unable to allocate memory");
	else
	{
		*ptr=55;
		printf("\n *ptr=%d [%u] &ptr=%u", *ptr, ptr, &ptr);
		printf("\n Enter value for ptr=");
		scanf("%d", ptr);

		printf("\n *ptr=%d [%u] &ptr=%u", *ptr, ptr, &ptr);

		free(ptr);
		ptr=NULL;
		printf("\n memory is freed ");

	}
	return 0;
}
