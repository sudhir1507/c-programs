//Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
void naturalno(int);
int main(){
	int n;
	printf("Natural numbers upto ");
	scanf("%d",&n);
	naturalno(n+1);
	return 0;
}
void naturalno(int n){
	if(n>1){
		n--;
		naturalno(n);
		printf("%d ",n);
	}
}
