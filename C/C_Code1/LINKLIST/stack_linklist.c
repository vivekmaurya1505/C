#include<stdio.h>
#include<stdlib.h>
#define limit 10

typedef struct STACK{

	struct STACK *prev;
	int data;
}NODE;
enum {
	EXIT,PUSH,POP
};
int choice();
void push(NODE **,int *);
void pop(NODE **, int *);
NODE * create_node();
int main(){

	NODE *head=NULL;
	int top=-1;
	int ch;
	do{
		ch=choice();
		switch(ch){

			case EXIT:
				return 0;
				break;
			case PUSH:
				push(&head,&top);
				break;
			case POP:
				pop(&head,&top);
				break;
			default :
				printf("\n ENTER A VALID CHOICE::");
				break;
		}


	}while(1);

}
void push(NODE **h,int *top1){
	NODE *t;
	if(*top1<limit){
		t=create_node();
		t->prev=*h;
		*h=t;
		(*top1)++;
	}
	else{
		printf("\n ERROR... STACK OVERFLOW");
	}
}
void pop(NODE **h,int *top1){

	if(NULL!=(*h)){
		printf("\n POPPED ELEMENT IS:%d",(*h)->data);
		*h=(*h)->prev;
		(*top1)--;
	}
	else{
		printf("\n ERROR... STACK EMPTY::");
	}
}
NODE *create_node(){

	NODE *t;
	t=(NODE*)malloc(sizeof(NODE));
	scanf("%d",&t->data);
	t->prev=NULL;
	return t;

}
int choice(){
	int ch;
	printf("\n 0. EXIT\n 1. PUSH\n 2. POP\n ENTER CHOICE::   ");
	scanf("%d",&ch);
	return ch;
}
