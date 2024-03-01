//Write a C program to calculate factorial of a number.
#include<stdio.h>
int factorial(int,int);
int main(){
	int no;
	printf("Enter the number :");
	scanf("%d",&no);
	int f=factorial(no,1);
	printf("Factorial of %d is %d",no,f);
	return 0;
}
int factorial(int no,int fact){
	if(no!=0){
		fact*=no;
		return factorial(--no,fact);
	}else{
		return fact;
	}
}
