//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
void naturalno(int);
int main(){
	int n;
	printf(" Reverse Natural numbers from ");
	scanf("%d",&n);
	naturalno(n);
	return 0;
}
void naturalno(int n){
	if(n>0){
	    printf("%d ",n);
		--n;
		naturalno(n);
		
	}
}
