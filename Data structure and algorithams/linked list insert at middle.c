#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct node *Next;
};
struct Node *Head=NULL;
void insertmiddle(){
	if(Head==NULL){
		Head=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data: ");
		scanf("%d",&Head->data);
		Head->Next=NULL;
	}else if(Head->Next==NULL){
		struct Node *temp;
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data in new node: ");
		scanf("%d",&temp->data);
		temp->Next=NULL;
		Head->Next=temp;
	}else{
		int value,flag=0;
		struct Node *temp1,*temp2,*newnode;
		printf("\nEnter the value after want to insert node:");
		scanf("%d",&value);
		temp1=Head;
		while(temp1!=NULL){
			if(temp1->data==value){
				temp2=temp1->Next;
				flag=1;
				break;
			}
			temp1=temp1->Next;
		}
		if(flag){
		   newnode=(struct Node*)malloc(sizeof(struct Node));
		   printf("\nEnter data in new node : ");
		   scanf("%d",&newnode->data);
		   newnode->Next=NULL;
		   temp1->Next=newnode;
		   newnode->Next=temp2;
		}else{
			printf("Node not found");
		}
	}
}
void display(){
	struct Node *temp;
	temp=Head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->Next;
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
				insertmiddle();
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
