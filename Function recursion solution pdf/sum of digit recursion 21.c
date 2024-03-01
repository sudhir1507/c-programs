//Write a C program to calculate sum of digits of a number
#include<stdio.h>
int digitSum(int,int);
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int sumD=digitSum(no,0);
	printf("Sum of Digits : %d",sumD);
	return 0;
}
int digitSum(int no,int sum){
	if(no!=0){
		sum=sum+no%10;
		return digitSum(no/10,sum);
	}
	else{
		return sum;
	}
}
