#include<stdio.h>
#include<stdlib.h>
#define limit 5
struct queue{
	int data;
	struct queue *next; 
};

void insert(int *,int *,struct queue ** );
void delet(int *,int *,struct queue **);
void display(int *,int*,struct queue **);

void display(int *f,int*r,struct queue **h);
struct queue *create_node();
int choice();
int main(){
        int front=-1,rear=-1;
        int c;
	struct queue *head;
        while(1)
        {
                c=choice();
                switch(c){
                        case 0:
                                return 0;
                                break;
			case 1:
                                insert(&front,&rear,&head);
                                break;
                        case 2:
                                delet(&front,&rear,&head);
                                break;
                        case 3:
                                display(&front,&rear,&head);
                                break;
                        default:
                                printf("ENTER VALID CHOICE:");

                }
	}
}


void insert(int *f,int *r,struct queue **h){
	struct queue *newnode,*t;
	t=*h;
	newnode=create_node();

			if(*r==-1){
				*h=newnode;
				*f=0;
				*r=0;
				return ;
			}

	if((*r)<(limit-1)){		
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=newnode;
		(*r)++;
	}
	else{
		printf("QUEUE IS FULL");
	}
}


void delet(int *f,int *r,struct queue **h){

	struct queue *t;
	t=*h;
	if(-1==(*f)){
		printf("\nQUEUE IS EMPTY");
		return ;
	}

	for(int i=0;i<(*f);i++){
		t=t->next;
	}

	t->data=0;
	(*f)++;
	if((*f)<(*r)){
		return;
	}
	if(*r==*f){
		*f=-1;
		*r=-1;
		return ;
	}


}



struct queue *create_node(){
	struct queue *temp;
	int data1;
		temp=(struct queue *)malloc(sizeof(struct queue));
		printf("enter data");
		scanf("%d",&data1);
                temp->data=data1;
		temp->next=NULL;
		return temp; 



}

void display(int *f,int*r,struct queue **h){
	struct queue *t=*h;
	if((*f)==-1){
		printf("QUEUE IS EMPTY");
	}
	else{
		for(int i=0;i<(*f);i++){
			t=t->next;
		}
			for(int i=(*f);i<=(*r);i++){
				printf("==%d",t->data);
				t=t->next;
			}
		
	}

}
int choice(){
        int c;
        printf("\n0. EXIT\n1. INSERT ELEMENT\n2. DELET ELEMENT\n3. DISPLAY\n ENTER CHOICE::");
        scanf("%d",&c);
        return c;

}

