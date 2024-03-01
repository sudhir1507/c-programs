//Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
int isPalindrome(int,int,int);
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int temp=no;
	int p=isPalindrome(no,0,temp);
	if(p==1){
		printf("%d is PALINDROME ",no);
	}else{
		printf("%d is NOT PALINDROME ",no);
	}
	return 0;
}
int isPalindrome(int no,int rev,int temp){
	if(no!=0){
		rev=rev*10 + no%10;
		return isPalindrome(no/=10,rev,temp);
	}else{
	
	  if(rev==temp)
	     {
	     	 return 1;
		 }
	  else
	      {
	      	return 0;
		  }
   }
}
