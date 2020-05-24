#include<stdio.h>
typedef struct student{
	char name[10];
	int roll_no;
	int marks[5];
}stu_data;
int main(){

	stu_data s[5];
	int m_t[5]={0};
	int s_t_m[5]={0};

	printf("\n Enter student information::");

	for(int i=0;i<5;i++ ){

		printf("\n %d.student name and roll_no::   \n",i+1);
		scanf("%s%d",s[i].name,&s[i].roll_no);
		printf("Enter Marks of student::");
		for(int j=0;j<5;j++){

			printf("\nsub %d mark   ",j+1);
			scanf("%d",&s[i].marks[j]);
			m_t[i]=m_t[i]+s[i].marks[j];    //to calculate total mark of student
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			s_t_m[i]=s_t_m[i]+s[j].marks[i];// to calculate total marks of particular sub 
		}
	}
	
		printf("NAME\tROLL_NO\tMARKS\t\tTOTAL\n");

	for(int i=0;i<5;i++ ){
		printf("%s\t%d\t",s[i].name,s[i].roll_no);
		for(int j=0;j<5;j++){
			printf("%d ",s[i].marks[j]);

		}
		printf("\t%d\n",m_t[i]);
	}
	
	for(int i=0;i<5;i++ ){

		printf("sub %d total mark:  %d\n",i+1,s_t_m[i]);
	}
}
