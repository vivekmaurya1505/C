#include<stdio.h>
void below_60(unsigned int );
void above_60(unsigned int);
void above_60_f(unsigned int);

void below_60(unsigned int sal){
	if(sal<=250000){
		printf("\n No tax");
	}
	else if(250000<sal && sal<=500000){
		printf("====%u",sal);
		sal=(sal*5)/100;
		printf("\n tax amount is %u ",sal);
	}

	else if(500000<sal && sal<=1000000){
		sal=12500+(sal*20)/100;
		printf("\n tax amount is %u ",sal);
	}
	else{
		
		sal=112500+(sal*30)/100;
		printf("\n tax amount is %u ",sal);
	}

}
void above_60(unsigned int sal){
        if(sal<=300000){
                printf("\n No tax");
        }
        else if(300000<sal && sal<=500000){
                sal=(sal*5)/100;
                printf("\n tax amount is %d ",sal);
        }

        else if(500000<sal && sal<=1000000){
               sal=10000+(sal*20)/100;
                printf("\n tax amount is %d ",sal);
        }
        else{
                
                sal=110000+(sal*30)/100;
                printf("\n tax amount is %d ",sal);
        }

}

void above_60_f(unsigned int sal){
        if(sal<=350000){
                printf("\n No tax");
        }
        else if(350000<sal && sal<=500000){
                sal=(sal*5)/100;
                printf("\n tax amount is %d ",sal);
        }

        else if(500000<sal && sal<=1000000){
                sal=10000+(sal*20)/100;
                printf("\n tax amount is %d ",sal);
        }
        else{

                sal=10000+(sal*30)/100;
                printf("\n tax amount is %d ",sal);
        }

}
int main(void){
	
	unsigned int age,salary;
	char gen;
	printf("\n INCOME TAX\n");
	printf("\nEnter gender m/f::");
	scanf("%c",&gen);
	if(gen=='m'||gen=='M'){
		printf("\n Enter age");
		scanf("%d",&age);
		if(age<60){
			printf("\nEnter a salary::");
			scanf("%u",&salary);
			below_60(salary);
		}
		else{
			printf("\nEnter a salary::");
			scanf("%u",&salary);
			above_60(salary);
		}

	}
	if(gen=='f'||gen=='F'){
		 printf("\n Enter age");
                scanf("%d",&age);
                if(age<60){
                        printf("\nEnter a salary::");
                        scanf("%d",&salary);
                        above_60(salary);        //above_60 for male is same as below 60 for female
                }
                else{
                        printf("\nEnter a salary::");
                        scanf("%d",&salary);
                        above_60_f(salary);
                }

	}
return 0;
}
