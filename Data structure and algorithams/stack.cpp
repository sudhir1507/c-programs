#include<stdio.h>
int main(){
	int que[5],choice,front=0,rare=-1,value;  // 5*2=10/2=5
	int max=sizeof(que)/sizeof(que[0]);  //5
	
	do{
		printf("\n1.insert");
		printf("\n2.delete");
		printf("\n3.display");
		printf("\nEnter choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(rare==max-1){
					printf("que is full");
				}else{
					rare=rare+1;
					printf("insert value :");
					scanf("%d",&value);
					que[rare]=value;
				}
				break;
			case 2:
				if((rare==-1&&front==0)||(front==rare+1)){
					printf("que is underflow");
				}else{
					int data=que[front];  // 3-element  2
					front=front+1;
					printf("%d",data);
				}
				break;
			case 3:
				if((rare==-1&&front==0)||(front==rare+1)){
					printf("que is underflow");  // 
				}else{
					for(int i=front;i<=rare;i++){   // top -0 1 2  
						printf("%d\n",que[i]); //30  20 10  
					}
				}
				break;
				
		}
		
	}while(choice!=4);
}
