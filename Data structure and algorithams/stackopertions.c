#include<stdio.h>
int main(){
	int stack[5],i,top=-1,MAX,value,choice;
	char ch;
	MAX=sizeof(stack)/sizeof(stack[0]);
//	printf("S= %d",MAX);
	do{
		printf("1:PUSH");
	    printf("\n2:DISPLAY");
	    printf("\n3:POP");
		printf("\nEneter the choice to perform operations on stack: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(top==MAX-1)
				  {
			    	printf("\nStack Overflow");
			      }
			      else
				  {
			      	top=top+1;
			      	printf("Enter value in stack: ");
			      	scanf("%d",&value);
			      	stack[top]=value;
				  }
		    	break;
			case 2:
				if(top==-1){
					printf("Stack is Underflow");
				}else{
					for(i=top;i>=0;i--){
						printf("%d\n",stack[i]);
					}
				}
				break;
			case 3:
				if(top==-1){
					printf("Stack is underflow");
				}else{
					value=stack[top];
					top=top-1;
					printf("\nDeleted value: %d",value);
				}
				break;
			default:
				printf("\nWorng choice ");
	}
	printf("\nDo you want continue:");
	scanf("%c",&ch);
    ch=getch();
	}while(ch=='Y'||ch=='y');
	
}
