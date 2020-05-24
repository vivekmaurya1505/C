#include<stdio.h>
#define size 5
typedef struct stack{

	int x;
}STACK;
enum {EXIT,PUSH,POP,DISPLAY};
void push(int *,STACK *); 
void pop(int *,STACK *);
void display(int *,STACK *);
int choice();
int main(){
	
	STACK s[size];
	int top=-1,c;	
	while(1){
	c=choice();
	switch(c){
		
		case EXIT:
			return 0;
		break;

		case PUSH:
			push(&top,s);
		break;

		case POP:
			pop(&top,s);
		break;

		case DISPLAY:
			display(&top,s);
		break;
		
		default:
			printf("\n ENTERED CHOICE IS INVALID\n");
		break;
	}
	}

}

void push(int *top1,STACK s1[]){
	
	if(*top1<size){
		(*top1)++;
		printf("\n INSERT A ELEMENT TO STACK");
		scanf("%d",&s1[*top1].x);
	}
	else{

		printf("\n STACK IS FULL \n");
	}
}
void pop(int *top1,STACK s1[]){
	if(*top1>-1){
		printf("\n POP ELEMENT=%d",s1[*top1].x);

		(*top1)--;
	}
	else{
		printf("\n STACK IS EMPTY\n");

	}
}
void display(int *top1,STACK s1[]){

	if(*top1==-1){
		printf("\n STACK IS EMPTY\n");
	}
	for(int i=0;i<=*top1;i++){
		printf("\n %d. ELEMENT=%d",i,s1[i].x);

	}
}

int  choice(){
	
	int choice1;
	printf("\n ENTER CHOICE::\n 0. EXIT\n 1. PUSH\n 2. POP\n 3. DISPLAY\n ");
	scanf("%d",&choice1);
	return choice1;
}
