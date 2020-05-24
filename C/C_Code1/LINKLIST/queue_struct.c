#include<stdio.h>
#define size 5
typedef struct queue{
	int x;

}QUEUE;
void insert(int *,int *,QUEUE *);
void delet(int *,int *,QUEUE *);
void display(int *,int *,QUEUE *);
int choice();
int main(){
	int front=-1,rear=-1;
	QUEUE s[size]; 
	int c;
//	do
        while(1)
	{
	 	c=choice();
		switch(c){
			case 0:
				return 0;
				break;
			case 1: 
				insert(&front,&rear,s);
				break;
			case 2: 	
				delet(&front,&rear,s);
				break;
			case 3:
				display(&front,&rear,s);
				break;
			default:
	      			printf("ENTER VALID CHOICE:");

		}


//	}while(c!=0);	


	}

}

void insert(int *front1,int *rear1,QUEUE s1[]){
	if(*rear1==-1){
		(*front1)++;
		(*rear1)++;
		scanf("%d",&s1[*rear1].x);
		return ;
	}
	if(*rear1<size){
	        (*rear1)++;
		printf("ENTER ELEMENT IN QUEUE AT %d POSITION :\n",*rear1);
		scanf("%d",&s1[*rear1].x);
	}
	else{
		printf("Queue is full\n");
	}

}

void delet(int *front1,int *rear1,QUEUE s1[]){

	if(*front1<*rear1){
		printf("POSITION %d DELETED ELEMENT IS %d\n",*front1,s1[*front1].x);
		s1[*front1].x=0;
		(*front1)++;
	
		return ;
	}
	else if(*front1==*rear1){
		if(*front1==-1){
			printf("ELEMENT IS NOT PRESENT IN QUEUE\n");
			return;
		}
		printf("POSITION %d DELETED ELEMENT IS %d\n",*front1,s1[*front1].x);
		s1[*front1].x=0;
		*front1=-1;
		*rear1=-1;
	}

}


void display(int *front1,int *rear1,QUEUE s1[]){
	if(*front1==-1){
		printf("\n QUEUE IS EMPTY\n");
		return;
	}
	for(int i=*front1;i<=*rear1;i++){
		printf("\n%d ELEMENT =%d",i,s1[i].x);
	}

}

int choice(){
	int c;
	printf("\n0. EXIT\n1. INSERT ELEMENT\n2. DELET ELEMENT\n3. DISPLAY\n ENTER CHOICE::");
	scanf("%d",&c);
	return c;
	
}
