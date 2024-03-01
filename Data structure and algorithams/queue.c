#include<stdio.h>
	#include<conio.h>
	int main(){
//	   clrscr();
	   int queue[5],i,front=0,rear=-1,choice,value;
	   char ch;
	   int max=sizeof(queue)/sizeof(queue[0]);

	   do{
	    printf("\n\n\n\n");
	    printf("1:Insert\n");
	    printf("2:Delete\n");
	    printf("3:Display\n");
	    printf("Enter your choice\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	       case 1:
		        if(rear==(max-1))
		            {
		         	printf("Queue is full\n");
				 	}
			    else{
		  			rear=rear+1;
		  			printf("\nEnter value in queue\n");
		  			scanf("%d",&value);
		  			queue[rear]=value;
		            }
	       		break;
	       case 2:
	       		if((front==0 && rear==-1)||(front==rear+1))
	       		{	
		 			printf("Queue is empty");
	      		}
	       		else{
		 			int value=queue[front];
		 			front=front+1;
					printf("\nDelete value is %d\n",value);

	       			}
	       		break;
	       case 3:
	       		if((front==0 && rear==-1)||(front==rear+1))
	       		{
		 			printf("Queue is empty");
	       		}
	       		else{
		  			for(i=front;i<=rear;i++)
		  			{
		   				 printf("%d\t",queue[i]);
		  			}
	      			}
	       		break;
	       default:
	       		printf("wrong choice\n");
	   	}
	    printf("\nDo you want to continue\n");
	    ch=getch();
	   }while(ch=='y'||ch=='Y');
	}
