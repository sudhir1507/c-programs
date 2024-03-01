#include<stdio.h>
int main(){
	int no,rev=0,rem;
	printf("Enter the number : ");
	scanf("%d",&no);
	int original=no;
	while(no!=0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(original==rev){
		printf("%d is palindrome number",original);
	}else{
		printf("%d is not palindrome number",original);
	}
	return 0;
	
}
