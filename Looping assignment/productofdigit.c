#include<stdio.h>
int main(){
	int rem,product=1,n;
	printf("Enter the number to calculate product of digit:");
	scanf("%d",&n); //123
	while(n!=0){
		rem=n%10;  //123%10  3 2 1
		product=product*rem;  //3 6 
		n=n/10;   //12 1 0
	}
	printf("product of digits is : %d\n",product);  //6
	return 0;
}
