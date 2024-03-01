//18.Write a C program to find first and last digit of a number.
#include<stdio.h>
void firstlast(int);
int temp,f,l;
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	temp=no;
	firstlast(no);
	return 0;
}
void firstlast(int no){
	if(no!=0){
	   f=no%10;
	   no/=10;
	   firstlast(no);
	}else{
		printf("First=%d",f);
		l=temp%10;
		printf("Last=%d",l);
	}
}
