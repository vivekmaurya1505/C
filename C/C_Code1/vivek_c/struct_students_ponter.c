#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	int roll_no;
	char *name;
};
int main(){
	struct student stu[5];
	char buf[20];char *n;
	printf("\n Enter roll_no and name::");
	for(int i=0;i<5;i++){
		printf("\n student [%d]\n roll_no=",i+1);
		scanf("%d",&stu[i].roll_no);
		printf(" name=");
		scanf("%s",buf);

		stu[i].name=(char*)malloc(strlen(buf));
		strcpy(stu[i].name,buf);
	}

	for(int i=0;i<5;i++){
		printf("\nstu[%d]=%d  %s",i+1,stu[i].roll_no,stu[i].name);
	}
		
return 0;
}
