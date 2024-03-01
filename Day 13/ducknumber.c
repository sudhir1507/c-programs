// Duck number is the number which contains zero in it.
#include<stdio.h>
int main(){
	int no,rem,flag=0;
	printf("Enter the number :");
	scanf("%d",&no);
	for(;no!=0;no/=10){
		rem=no%10;
		if(rem==0){
			flag=1;
		}
	}
	if(flag){
		printf("Duck number");
	}else{
		printf("Not Duck Number");
	}
}
