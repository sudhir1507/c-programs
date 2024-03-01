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
		printf("LL is empty\n");
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
		printf("\n3.Delete at Begining.");
		printf("\n4.Delete at End");
		printf("\n5.Delete at Middle");
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				delatB(); // Delete node at begining
				break;
			case 4:
				delatend();   //Delete node at end
				break;
			case 5:
				delatmiddle(); //Delete node at middle
				break;
			default:
				printf("Wrong choice");
		}
	}while(choice!=6);
	return 0;
}
