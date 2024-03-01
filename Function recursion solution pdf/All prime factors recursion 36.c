//36.Write a C program to find all prime factors of a number.
#include<stdio.h>
void allPrimeFactors(int,int);
int main(){
	int no;
	printf("Enter the number  : ");
	scanf("%d",&no);
	allPrimeFactors(no,2);
	return 0;
}
void allPrimeFactors(int n,int i){
	if(i<=n){
	     if(n%i==0){
	     	int j,count=0;
	     	for(j=2;j<i;j++){
	     		if(i%j==0){
	     			count++;
				 }
			 }
			 if(count==0){
			 	printf("%d\n",i);
			 }
		 }
		 ++i;
		 allPrimeFactors(n,i);
	}
}
