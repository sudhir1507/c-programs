//strong number : strong number is the number sum of factors of whose digits equal to the number.
#include<stdio.h>
int main(){
	int no,fact,i,rem,sum=0;
	printf("Enter the number :");
	scanf("%d",&no);
	int temp=no;
	for(;no!=0;no/=10){
		rem=no%10;
		fact=1;
		i=1;
		for(;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
	}
	printf("%d ",sum);
	if(temp==sum){
		printf("Strong number");
	}else{
		printf("Not Strong number");
	}
}
