//prime no
#include<stdio.h>
int main(){
	int no,i,count=0;
	printf("Enter the number: ");
	scanf("%d",&no);
	for(i=2;i<=no;i++){
		if(no%i==0){
			count++;
		}
	}
	if(count==1){
		printf("Prime ");
	}else{
		printf("Not prime");
	}
}
