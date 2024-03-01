#include<stdio.h>
#include<math.h>
int main(){
	int no,sum,rem,count=0;
	printf("Enter the number : ");
	scanf("%d",&no);
	int temp=no;
	for(;no>0;no/=10){
		count++;
	}

	no=temp;
	for(;no>0;no/=10){
		rem=no%10;
		sum=sum+pow(rem,count);
	}
	printf("%d ",sum);
	if(temp==sum){
		printf("Armstrong ");
	}else{
		printf("Not Armstrong");
	}
}
