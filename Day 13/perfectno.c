//perfect number
#include<stdio.h>
int main(){
	int sum=0,no,i;
	printf("Enter the number : ");
	scanf("%d",&no);
	int temp=no;
	for(i=1;i<(no-1);i++){
	       if(no%i==0){
	       	sum=sum+i;
		   }
	       
	}
	if(temp==sum){
		printf("perfect no");
	}else{
		printf("not perfect");
	}
	
}
