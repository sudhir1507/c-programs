//Write a C program to calculate product of digits of a number.
#include<stdio.h>
int digitProd(int,int);
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int product=digitProd(no,1);
	printf("Product of Digits : %d",product);
	return 0;
}

int digitProd(int no,int p){
	if(no!=0){
		p=p * (no%10);
	    return digitProd(no/=10,p);
	}
	else{
		return p;
	}
}
