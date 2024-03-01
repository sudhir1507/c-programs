#include<stdio.h>
int main(){
	int number,rev=0,rem,original_no;
	
	printf("enter three digit number:");
	scanf("%d",&number);
	original_no=number;
	rem=number%10;
	rev=rev*10+rem;
	number=number/10;
	rem=number%10;
	rev=rev*10+rem;
	number=number/10;
	rem=number%10;
	rev=rev*10+rem;
	number=number/10;
//	printf("reverse=%d",rev);
	original_no==rev?printf("number is palindrome"):printf("\nnumber is not palindrome");
	return 0;
}
