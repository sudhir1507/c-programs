//1.Write a C program to print all even numbers between 1 to 100. - using while loop
#include<stdio.h>
void even(int );
int main(){
	int n=1;
	even(n);
	return 0;
}
void even(int n){
	if(n<=100){
		if(n%2==0){
			printf("%d ",n);
		}
		n++;
		even(n);
	}
}
