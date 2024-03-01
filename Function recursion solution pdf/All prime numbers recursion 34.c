//34.Write a C program to print all Prime numbers between 1 to n.
#include<stdio.h>
void primeNumbers(int,int);
int main(){
	int limit,k;
	printf("Enter the limit :");
	scanf("%d",&limit);
	primeNumbers(limit,2);
	return 0;
}
void primeNumbers(int limit,int i){
	if(i<=limit){
		int count=0,j;
		for(j=2;j<i;j++){
		  if(i%j==0){
				count++;
			}
		}
		if(count==0){
		     printf("%d ",i);
		}
		primeNumbers(limit,++i);
      }
	}
