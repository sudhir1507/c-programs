#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the three number :");
	scanf("%d\n%d\n%d",&num1,&num2,&num3);
	num1>num2&&num1>num3?printf("Num1=%d is Highest",num1):
	num2>num1&&num2>num3?printf("Num2=%d is Highest",num2):
	printf("\nNum3=%d is highest",num3);;
	
	return 0;
}
