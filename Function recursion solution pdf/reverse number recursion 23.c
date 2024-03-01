//Write a C program to enter a number and print its reverse.
#include<stdio.h>
int reverno(int,int);
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int r=reverno(no,0);
	printf("reverse number is: %d",r);
	return 0;
}
int reverno(int no,int rev){
	if(no!=0){
		rev=rev*10 + no%10;
		return reverno(no/10,rev);
	}
	else{
		return rev;
	}
}
