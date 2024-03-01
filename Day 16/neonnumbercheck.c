#include<stdio.h>
int main(){
	int no,sum=0;
	printf("Enter the number: ");
	scanf("%d",&no);
	int neon=no;
	no=no*no;
	while(no!=0){
		sum=sum+no%10;
	    no/=10;
	}
	sum==neon?printf("%d is neon Number",neon):printf("%d is not neon Number",neon);
	
}
