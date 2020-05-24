#include<stdio.h>
#include<stdlib.h>
struct tree {
	struct tree *left;
	int data;
	struct tree *right;
};

void insert(struct tree **root1);
void display(struct tree *root1);
int main(){

	struct tree *root=NULL;
	insert(&root);
	display(root);

}


void insert(struct tree **root1){

	int ele;
	if(*root1==NULL){

		(*root1)=(struct tree *)malloc(sizeof(struct tree));
		printf("\n ENTER AN ELEMENT::");
		scanf("%d",&ele);
		(*root1)->data=ele;
		(*root1)->left=NULL;
		(*root1)->right=NULL;
	
	}

	else{
		if(ele<((*root1)->data)){

			insert(&((*root1)->left));
		}
		else{
			insert(&((*root1)->right));

		}

	}

}

void display(struct tree *root1){
	if(root1!=NULL){
	printf("\n root1->data==%d",root1->data);
	display((root1->left));

	display((root1->right));
	}
}

