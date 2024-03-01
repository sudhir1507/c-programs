//17.Write a C program to count number of digits in a number.
#include<stdio.h>
int digitcount(int,int);
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int dc=digitcount(no,0);
	printf("Number of digits = %d",dc);
}

int digitcount(int no,int count){
	if(no!=0){
		no/=10;
		return digitcount(no,++count);	
	}else{
		return count;
	}
}
