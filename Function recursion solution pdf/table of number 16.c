//Write a C program to print multiplication table of any number.
#include<stdio.h>
void table(int, int);
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	table(no,1);
	return 0;
	
} 
void table(int no,int i){
	if(i<=10){
		printf("%d\n",no*i);
		table(no,++i);
	}
}
