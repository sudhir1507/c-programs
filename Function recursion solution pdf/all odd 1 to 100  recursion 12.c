//Write a C program to print all odd number between 1 to 100.
#include<stdio.h>
void odd(int );
int main(){
	int n=1;
	
	odd(n);
	return 0;
}
void odd(int n){
	if(n<=100){
		if(n%2==1){
			printf("%d ",n);
		}
		n++;
		odd(n);
	}
}
