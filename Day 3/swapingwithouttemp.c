#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter the number1 and number2:");
	scanf("%d\n%d",&num1,&num2);
	printf("\nNumber before swaping num1=%d and num2=%d",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\nNumber after swaping num1=%d and num2=%d",num1,num2);
	return 0;
}
