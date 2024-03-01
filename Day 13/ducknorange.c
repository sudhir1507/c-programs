#include<stdio.h>
int main(){
	int limit,i,j,rem,no;
	printf("Enter the limit:");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){

		no=i;
		
		for(;no!=0;){
			rem=no%10;
			if(rem==0){
				printf("%d\n",i);
				break;
			}
			no/=10;			
		}
	}
	
}
