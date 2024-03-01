#include<stdio.h>
int main(){
	int num,rev=0,rem;
	printf("Enter the number :");
	scanf("%d",&num);
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
	
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
	
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
	
	printf("Reverse number is :%d",rev);
	return 0;
}
