#include<stdio.h>
#include<math.h>
int main(){
	int no,a=0,rem,c=0,temp;
	printf("Enter the number: ");
	scanf("%d",&no);
	temp=no;
	while(no!=0){
		no=no/10;
		c++;
	}
	no=temp;
	while(no!=0){
		rem=no%10;
		a=a+pow(rem,c);
		no/=10;
	}
	if(a==temp){
		printf("Amstrong");
	}else{
		printf("Not Amstrong");
	}
}
