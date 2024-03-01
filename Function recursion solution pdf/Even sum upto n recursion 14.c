//Write a C program to find sum of all even numbers between 1 to n
#include<stdio.h>
int evenSum(int );
int main(){
	int n;
	printf("even sum  upto number ");
	scanf("%d",&n);
	int s=evenSum(n);
	printf("Even sum is %d",s);
	return 0;
}
int sum=0,i=1;
int evenSum(int n){
	if(i<=n){
		if(i%2==0){
			sum=sum+i;
		}
		i++;
		return evenSum(n);
	}else{
		return sum;
	}
}
