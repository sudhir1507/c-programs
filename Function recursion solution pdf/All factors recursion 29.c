//Write a C program to find all factors of a number.
#include<stdio.h>
void allFactors(int,int);
int main(){
	int no;
	printf("Enter the number  : ");
	scanf("%d",&no);
	allFactors(no,2);
	return 0;
}
void allFactors(int no,int i){
	if(i<=no){
		if(no%i==0){
			printf("%d ",i);
		}
		allFactors(no,++i);
	}
}
