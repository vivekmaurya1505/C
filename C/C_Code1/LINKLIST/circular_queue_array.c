#include<stdio.h>
#define SIZE 5
typedef struct queue{
	int x;
}QUEUE;
void insert(int *,int *,QUEUE []);
void display(int *,int *,QUEUE []);
void delet(int *,int *,QUEUE []);
int choice();
int main(){
	int c;
	QUEUE S[SIZE];
	int front=-1,rear=-1;
 while(1)
        {
                c=choice();
                switch(c){
                        case 0:
                                return 0;
                                break;
                        case 1:
                                insert(&front,&rear,S);
                                break;
                        case 2:
                                delet(&front,&rear,S);
                                break;
                        case 3:
                                display(&front,&rear,S);
                                break;
                        default:
                                printf("ENTER VALID CHOICE:");

                }

	
	}


}


void insert(int *front1,int *rear1,QUEUE S1[]){

	if((*front1==0 && *rear1==SIZE-1)||((*rear1)+1==*front1)){
		printf("QUEUE IS FULL\n");
		return;
	}
	if(*front1==-1){
		*front1=0;
	
	}
	if(*rear1==SIZE-1){
		*rear1=0;
	}
	else{
		(*rear1)++;
	}                                                                                                                                                                                                                               

		printf("ENTER ELEMENT IN QUEUE AT %d POSITION :\n",*rear1);
		scanf("%d",&S1[*rear1].x);
}

void delet(int *front1,int *rear1,QUEUE S1[]){
	if(*front1==-1){
		printf("QUEUE IS EMPTY\n");
		return;
	}
		
	printf("DELETED ELEMENT AT POSITION %d IS %d\n",*front1,S1[*front1].x);
	S1[*front1].x=0;


	if(*front1==*rear1){
		*front1=*rear1=-1;
		return;
	}
	if(*front1==SIZE-1){
		*front1=0;
return ;
	}

	(*front1)++;
}


void display(int *front1,int *rear1,QUEUE S1[]){
	if(*front1==-1){
		printf("QUEUE IS EMPTY\n");
		return;
	}
if(*front1>*rear1){
    for(int i=*front1;i<SIZE;i++){
		printf("%d. element in queue is %d\n",i,S1[i].x);

     }
            for(int i=0;i<=*rear1;i++){
		        printf("%d. element in queue is %d\n",i,S1[i].x);
	        }

    return ;
}
	for(int i=*front1;i<=*rear1;i++){
		printf("%d. element in queue is %d\n",i,S1[i].x);
	}

}
int choice(){
        int c;
        printf("\n0. EXIT\n1. INSERT ELEMENT\n2. DELET ELEMENT\n3. DISPLAY\n ENTER CHOICE::");
        scanf("%d",&c);
        return c;

}
