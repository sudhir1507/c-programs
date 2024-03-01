//35.Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>
int primeNumbers(int,int,int);
int main(){
	int limit,k;
	printf("Enter the limit :");
	scanf("%d",&limit);
	int s=primeNumbers(limit,2,0);
	printf("Sum All prime number is %d",s);
	return 0;
}
int primeNumbers(int limit,int i,int sum){
	if(i<=limit){
		int count=0,j;
		for(j=2;j<i;j++){
		  if(i%j==0){
				count++;
			}
		}
		if(count==0){
		     sum=sum+i;
		}
		return primeNumbers(limit,++i,sum);
      }
      return sum;
	}

