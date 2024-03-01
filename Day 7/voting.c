#include<stdio.h>
int main(){
	int age;
	printf("Enter the age of candiate:");
	scanf("%d",&age);
	age>18?printf("Congratulations! You are eligile for casting your vote."):printf("Sorry, You are not eligible to casting your vote.");
	return 0;
}
