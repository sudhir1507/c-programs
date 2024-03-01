#include<stdio.h>
int main(){
	int number,rem,sum=0;
	printf("Enter the number less than 500:");
	scanf("%d",&number);
    rem=number%10;
	number/=10;
	sum=sum+rem;
	rem=number%10;
	number/=10;
	sum=sum+rem;
	rem=number%10;
	number/=10;
	sum=sum+rem;
	printf("Sum of the digits of number is %d",sum);
	
	
	return 0;
}
