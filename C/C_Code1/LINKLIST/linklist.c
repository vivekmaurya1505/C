#include<stdio.h>
#include<stdlib.h>
 typedef struct node  {
	int x;
	char ch;
	struct node *next;
}NODE;
// struct node NODE;
NODE *create_node();
void ADDFIRST(NODE ** );
void DISPLAY(NODE *);
void ADDLAST(NODE **);
void ADDPOS(NODE** ,int);
void DELFIRST(NODE **);
void DELLAST(NODE **);
void DELPOS(NODE **,int);
int ENTERCHOICE() ;

enum linklist {exit1,addfirst,addlast,addpos,delfirst,delpos,dellast,display};


int main(){

	NODE *head=NULL;
	int pos,choice;
	while(1){
	
	choice=ENTERCHOICE();
switch(choice){

	case exit1: return 0;
        case addfirst:
		ADDFIRST(&head);
	break;
	
	case addlast:
		ADDLAST(&head);
	break;

	case addpos:
		printf("\n Enter position to add node::");
		scanf("%d",&pos);
		ADDPOS(&head,pos);
	break;

	case delfirst:
		DELFIRST(&head);
	break;

	case delpos:
		
		printf("\n Enter position to delete node::");
		scanf("%d",&pos);
		DELPOS(&head,pos);
	break;

	case dellast:
		DELLAST(&head);

	break;
	case display:
			DISPLAY(head);
	break;

	default:
		printf("\n Entered choice are invalid::\n");
	break;
}
}



return 0;
}
void ADDFIRST(NODE **q){
	NODE *temp1;
	temp1=create_node();
	if(*q==NULL){
		*q=temp1;
		printf("null");
	}
	else{
		temp1->next=*q;
		*q=temp1;
		printf("not_null");

	}

}

void ADDPOS(NODE **q,int pos){

	NODE *temp1,*trav,*tr;
	tr=*q;
	trav=*q;
	temp1=create_node();

  	int count=0;
        while(trav!=NULL){
                trav=trav->next;
                count++;
        }	
	if(pos==1){	
		ADDFIRST(q);
	}	
		

	else if(pos<=count){
 		for(int i=2;i<pos;i++){
				trav=trav->next;
			}

		temp1->next=trav->next;
		trav->next=temp1;
		printf("\n addpos");

	}
	else if(pos==count+1){
		ADDLAST(q);
	}
	else{	
		printf("\n Entered wrong position, minimum position should be <=%d  ",count+1);
	}
}
void ADDLAST(NODE **q){
	NODE *temp1,*trav;
	trav=*q;

	temp1=create_node();
	if(*q==NULL){               //if there is no node add  at first
		*q=temp1;
	}
	else{
		while(trav->next!=NULL){   // add last using traverser
			trav=trav->next;
			printf("addlast\t");
		}
		trav->next=temp1;
	}
		

}
void DELFIRST(NODE **q){
	NODE *del;
	
	if(*q==NULL){
		printf("\n NO NODE PRESENT IN LINLIST FOR DELETION ::\n");
		return ;
	}
	else{
		del=*q;
		*q=(*q)->next;
	}
	free(del);
	del=NULL;
}
NODE *create_node(){

	NODE*temp;
	temp=(NODE*)malloc(sizeof(NODE));
	printf("\n Enter a data");
	scanf("%d %c",&temp->x,&temp->ch);
	temp->next=NULL;


	return temp;
}

void DISPLAY(NODE *trav){
	int count=0;
	while(trav!=NULL){
		printf("--> %d %c",trav->x,trav->ch);
		trav=trav->next;
		count++;

	}
	printf("\n %d NODE PRESENT IN LINLIST::\n",count);
}
void DELLAST(NODE **q){
	NODE *del,*trav;
	trav=*q;
	if(trav==NULL){
		printf("\n NO NODE PRESENT IN LINLIST::\n");
		return ;
	}

del=trav->next;
	 if(trav->next==NULL){
		del=trav;
		free(del);
		*q=NULL;
	}
	else{
		while(del->next!=NULL){
			trav=del;
			del=del->next;
		}
		trav->next=NULL;
		free(del);
		trav=NULL;
	}

}
void DELPOS(NODE **q,int pos){
	NODE *trav,*del;
	trav=*q;

  	int count=0;
        while(trav!=NULL){
                trav=trav->next;
                count++;
        }	
	if(pos==1){
		*q=NULL;
		printf("\n NO NODE PRESENT IN LINLIST ALL NODE DELETED::\n");
	}


	else if(pos<=count){
		for(int i=2;i<pos;i++){
			trav=trav->next;
		}
		del=trav->next;
		trav->next=del->next;
		free(del);
	}
	else{
		printf("\n INVALID POSITION WE CAN NOT DELETE AT %d POSITION BECAUSE LENGHT OF LINKLIST IS %d",pos,count);
	}
}
int  ENTERCHOICE(){
	int choice;
	printf("\n 0. exit1\n 1. addfirst\n 2. addlast\n 3. addpos\n 4. delfirst\n 5. delpos\n 6. dellast\n 7. display\n");
	printf("Enter your choice::");
	scanf("%d",&choice);
	return choice;
}
