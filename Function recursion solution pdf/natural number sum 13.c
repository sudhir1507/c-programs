//Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int naturalnoSum(int);
int main(){
	int n;
	printf("Natural numbers upto ");
	scanf("%d",&n);
	int s=naturalnoSum(n);
	printf("Sum is %d ",s);
	return 0;
}
int sum=0,i=1;
int naturalnoSum(int n){
	if(i<=n){
		sum=sum+i;
		++i;
		return naturalnoSum(n);	
	}else{
		return sum;
	}
}
