#include<stdio.h>
struct employe
{
	int empid;
	char name[10];
	float salary;
	int yr;
};
int main()
{	
	struct employe e1[3];
	int i,j,total=0,yrmin,yrmax;
	float max,min,avg;
	printf("enter the details of 3 employes \n");
	printf("empid,name,salary,yr");
	for(i=0;i<3;i++)
		scanf("%d%s%f%d",&e1[i].empid,e1[i].name,&e1[i].salary,&e1[i].yr);
	for(i=0;i<3;i++)
		total=total+e1[i].salary;
	avg=(float)total/3;
	min=e1[0].salary;
	max=e1[0].salary;
	yrmin=e1[0].yr;
	yrmax=e1[0].yr;
	for(j=0;j<3;j++)
	{
		if(max<e1[j].salary)
			max=e1[j].salary;
		if(min>e1[j].salary)
			min=e1[j].salary;
		if(yrmin<e1[j].yr)
			yrmin=e1[i].yr;
		if(yrmax>e1[j].yr)
			yrmax=e1[j].yr;

	}
	printf("total=%d avg=%f max sal=%f min sal=%f max yr=%d min yr=%d ",total,avg,max,min,yrmax,yrmin);
	printf("\n");
}
