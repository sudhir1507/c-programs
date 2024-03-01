#include<stdio.h>
int isperfect(int,int);
int main(){
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	int result=isperfect(no,1);
	if(result==1){
		printf("%d Number is perfect",no);
	}else{
		printf("%d Number is not perfect",no);
	}
}
int sum=0;
int isperfect(int no,int i){
	if(i<no){
		if(no%i==0){
			sum=sum+i;
		}
	    return isperfect(no,++i);	
	}
	if(no==sum){
		return 1;
	}else{
		return 0;
	}
}
