#include<stdio.h>
void swap (void *vp1, void *vp2,int size)
{
    double *buffer = (double *)malloc(sizeof(size));
    memcpy(buffer, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, buffer, size);

}
	
void main()
{       void *vp1,*vp2;
	int c;
	int i1,i2;
	char c1,c2;
	int arr1[4]={1,2,3,4},arr2[4]={5,6,7,8};
	double d1,d2;
	printf("enter the choice\n");
	printf("1.int 2.char 3.array 4.double \n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf("enter 2 integer\n");
		       scanf("%d%d",&i1,&i2);
		       vp1=&i1;
		       vp2=&i2;
		       swap(vp1,vp2,sizeof(int));
   			 printf("after swapping %d %d ",i1,i2);
		       break;
		case 2:printf("enter 2 char\n");
		       scanf("%c%c",&c1,&c2);
		       vp1=&c1;
		       vp2=&c2;
		       swap(vp1,vp2,sizeof(char));
    			printf("after swapping %c %c ",c1,c2);
		       break;
		case 3:printf("swapping 2 arrays\n");
		       vp1=arr1;
		       vp2=arr2;
		       swap(arr1,arr2,sizeof(arr1));
   			 printf("after swapping %d %d ",arr1,arr2);
		       break;
		case 4:printf("enter 2 double values\n");
		       scanf("%le%le",&d1,&d2);
		       vp1=&d1;
		       vp2=&d2;
		       swap(vp1,vp2,sizeof(double));
    			printf("after swapping %le %le ",d1,d2);
		       break;
		default:printf("invalid choice\n");

	}
	printf("\n");
}
