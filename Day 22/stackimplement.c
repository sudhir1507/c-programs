#include<stdio.h>
int main(){
	int i,stack[5],value,max,choice,top=-1;
	char ch;
	max=sizeof(stack)/sizeof(stack[0]);
	do{
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\nEnter the choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(top==max-1){
					printf("\nStack is Overflow");
				}else{
					top=top+1;
					printf("\nEnter value: ");
					scanf("%d",&value);
					stack[top]=value;
				}
				break;
			case 2:
				if(top==-1){
					printf("\nStack is Underflow");
				}else{
					value=stack[top];
					top=top-1;
					printf("\nDeleted value %d",value);
				}
				break;
			case 3:
				if(top==-1){
					printf("\nStack is Underflow");
				}else{
					for(i=top;i>=0;i--){
						printf("%d ",stack[i]);
					}
				}
				break;
			default:
				printf("\nWrong choice..!");
		}
		printf("\nDo you want to continue?");
		ch=getch();
	}while(ch=='y'||ch=='Y');
}
