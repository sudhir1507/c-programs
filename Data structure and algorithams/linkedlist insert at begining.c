#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct node *Next;
};
struct Node *Head=NULL;
void insert(){
	if(Head==NULL){
		Head=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data: ");
		scanf("%d",&Head->data);
		Head->Next=NULL;
	}else{
		struct Node *temp;
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data: ");
		scanf("%d",&temp->data);
		temp->Next=Head;
		Head=temp;
	}
}

void display(){
	struct Node *temp;
	if(Head==NULL){
		printf("Linkedlist is empty\n");
	}else{
		temp=Head;
	    while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->Next;
	}
	}
	
}
int main(){
	int choice;
	do{
		printf("\n1.Insert");
		printf("\n2.Display");
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			default:
				printf("Wrong choice");
		}
	}while(choice!=3);
	return 0;
}
