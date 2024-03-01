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
void insertatend(){
	if(Head==NULL){
		Head=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data: ");
		scanf("%d",&Head->data);
		Head->Next=NULL;
	}else{
		struct Node *temp,*temp1;
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data: ");
		scanf("%d",&temp->data);
		temp->Next=NULL;
		temp1=Head;
		while(temp1->Next!=NULL){
			temp1=temp1->Next;
		}
		temp1->Next=temp;
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
void delatB(){
	if(Head==NULL){
		printf("Node not found\n");
	}else{
		struct Node *temp;
		temp=Head;
		Head=Head->Next;
		temp->Next=NULL;
		int value=temp->data;
		free(temp);
		temp=NULL;
		printf("Delete Node is %d\n",value);
	}
}
void delatend(){
	struct Node *temp,*temp1;
	if(Head==NULL){
		printf("Node not found\n");
	}else{
		temp=Head;
		while(temp->Next!=NULL){
			temp1=temp;
			temp=temp->Next;
		}
		temp1->Next=NULL;
		int value=temp->data;
		free(temp);
		temp=NULL;
		printf("Deleted Node is %d\n",value);
	}
}
void delatmiddle(){
	struct Node *temp,*temp1,*temp2;
	if(Head==NULL){
		printf("Node not found\n");
	}else{
		int value,flag=0;
		printf("Enter value for delete : ");
		scanf("%d",&value);
	    temp=Head;
	    while(temp!=NULL){
	    	if(temp->data==value){
	    		flag=1;
	    		temp2=temp->Next;
	    		break;
			}
			temp1=temp;
	    	temp=temp->Next;
		}
		if(flag){
			temp1->Next=temp2;
			temp->Next=NULL;
			int data=temp->data;
			printf("Deleted Node is %d\n",data);
			free(temp);
			temp=NULL;
		}else{
			printf("Node not found");
		}
	}
}
int main(){
	int choice;
	do{
		printf("\n1.Insert at the beginning");
		printf("\n2.Insert at middle");
		printf("\n3.Insert at the end.");
		printf("\n4.Display");
		printf("\n5.Delete from the beginning.");
		printf("\n6.Delete from the end.");
		printf("\n7.Delete from the middle.");
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				insertmiddle();
				break;
			case 3:
				insertatend();
				break;
			case 4:
				display();
				break;
			case 5:
				delatB();
				break;
			case 6:
				delatend();
				break;
			case 7:
				delatmiddle();
				break;
			default:
				printf("Wrong choice");
		}
	}while(choice!=8);
	return 0;
}
