0#include<stdio.h>
int main(){
	int rem,sum=0,n;
	printf("Enter the number to calculate sum of digit:");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of digits is : %d\n",sum);
	return 0;
}
