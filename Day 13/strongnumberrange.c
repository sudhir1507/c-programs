#include<stdio.h>
#include<math.h>
int main(){
	int i,j,limit,no,count,sum,rem;
	printf("enter the number:");
	scanf("%d",&limit);
	for(i=1;i<limit;i++){
		no=i;
		count=0;
		while(no!=0){
			count++;
			no/=10;
		}
		sum=0;
		no=i;
		
		for(;no>0;no/=10){
			rem=no%10;
			sum=sum+pow(rem,count);
		}
		no=i;
		if(sum==no){
			printf("%d\n",i);
		}
	}
}
