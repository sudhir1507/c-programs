//Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
int isprime(int,int);
int main(){
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	int result=isprime(no,2);
	if(result==1){
		printf("%d Number is prime",no);
	}else{
		printf("%d Number is not prime",no);
	}
}
int count=0;
int isprime(int no,int i){
	if(i<=no){
		if(no%i==0){
			count++;
		}
		return isprime(no,++i);	
	}
	if(count==1){
		return 1;
	}else{
		return 0;
	}
}
