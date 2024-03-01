//Write a C program to find sum of all odd numbers between 1 to n.
#include<stdio.h>
int oddSum(int );
int main(){
	int n;
	printf("Odd sum  upto number ");
	scanf("%d",&n);
	int s=oddSum(n);
	printf("Odd sum is %d",s);
	return 0;
}
int sum=0,i=1;
int oddSum(int n){
	if(i<=n){
		if(i%2==1){
			sum=sum+i;
		}
		i++;
		return oddSum(n);
	}else{
		return sum;
	}
}
