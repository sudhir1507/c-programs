#include<stdio.h>
int main(){
	int no,rev=0,rem;
	printf("Enter the number :");
	scanf("%d",&no);
	int original=no;
	while(no!=0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("reverse of %d is %d",original,rev);
	return 0;
}
