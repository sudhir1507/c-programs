#include<stdio.h>
int main(){
	int i,rear=-1,front=0,max,choice,queue[5],value;
	char ch;
	max=sizeof(queue)/sizeof(queue[0]);
	do{
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\nEnter the choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(rear==max-1){
					printf("\nQueue is full");
				}else{
					rear=rear+1;
					printf("\nEnter value: ");
					scanf("%d",&value);
					queue[rear]=value;
				}
				break;
			case 2:
				if((front==0)&&(rear==-1)||(front==rear+1)){
					printf("\nQueue is Empty ");
				}else{
					value=queue[front];
					front=front+1;
					printf("\nDeleted value : %d",value);
				}
				break;
			case 3:
				if((front==0)&&(rear==-1)||(front==rear+1)){
					printf("\nQueue is Empty ");
				}else{
					for(i=front;i<=rear;i++){
						printf("%d\t",queue[i]);
					}
				}
				break;
			default :
				printf("\nWrong choice..!");
		}
		printf("\nDo you want to continue: ");
//		scanf("%c",ch);
		ch=getch();
		}while(ch=='y'||ch=='Y');
	}

