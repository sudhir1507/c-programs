#include<stdio.h>
int main(){
	int NN,MM,KK;
	printf("Enter the Group of nn student max capacity and already register:");
	scanf("%d%d%d",&NN,&MM,&KK);
	if(1<=NN&&NN<=100&&1<=MM&&MM<=100&&0<=KK&&KK<=MM){
	     if(NN<=(MM-KK)){
		     printf("Yes");
	      }else{
		      printf("No");
	}
	}else{
		printf("Invalid input");
	}
	
	return 0;
}
