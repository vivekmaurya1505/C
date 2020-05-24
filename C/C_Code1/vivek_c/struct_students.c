#include<stdio.h>
struct student{
	int roll_no;
	char name[10];
};
int main(){

	struct student stu[5];
	printf("\n Enter roll_no and name::");
	for(int i=0;i<5;i++){
		printf("\n student [%d]\n roll_no=",i+1);
		scanf("%d",&stu[i].roll_no);
		printf(" name=");

		scanf("%s",stu[i].name);
	}

	for(int i=0;i<5;i++){
		printf("\nstu[%d]=%d  %s",i+1,stu[i].roll_no,stu[i].name);
	}

return 0;
}
