//Write a C program to print all Strong numbers between 1 to n.
#include<stdio.h>
void allStrong(int,int);
int main(){
	int limit,n=1;
	printf("Enter the limit: ");
	scanf("%d",&limit);
	allStrong(n,limit);
	
 return 0;
}

void allStrong(int n,int limit){
	int rem,i,fact,temp,sum;
	if(n<limit){
	sum=0;
	temp=n;
	while(n!=0){
		rem=n%10;
		fact=1;
		for(i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		n/=10;
	}
	if(sum==temp){
		printf("%d ",temp);
	}
	n=temp;
	allStrong(++n,limit);	
	}
	
}
