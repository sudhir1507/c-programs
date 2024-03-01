#include<stdio.h>
int main(){
	int queue[5],i,value,choice,front=0,rear=-1;
	char ch;
     int max=sizeof(queue)/sizeof(queue[0]);
     do{
     	printf("\n1.insert");
     	printf("\n2.delete");
     	printf("\n3.display");
     	printf("\nenter the choice: ");
     	scanf("%d",&choice);
     	switch(choice){
     		case 1:
     			if(rear==max-1){
     				printf("Queue is full\n");
				 }else{
				 	rear=rear+1;
				 	printf("Enter value: ");
				 	scanf("%d",&value);
				 	queue[rear]=value;
				 }
     			break;
     		case 2:
     			if((front==0&&rear==-1)||(front==rear+1)){
     				printf("queue is empty\n");
				 }else{
				 	value=queue[front];
				 	front=front+1;
				 	printf("\nDeleted value: %d",value);
				 }
     			break;
     		case 3:
     			if((front==0&&rear==-1)||(front==rear+1)){
     				printf("queue is empty\n");
				 }else{
				     for(i=front;i<=rear;i++){
				     	printf("%d\t",queue[i]);
					 }
				 }
     			break;
     		default:
     			printf("Wrong choice");
		 }
		 printf("\nDo you want continue : ");
		 ch=getch();
	 }while(ch=='y'||ch=='Y');
}
