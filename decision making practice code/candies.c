#include<stdio.h>
int main(){
	int N,k,s;
	printf("Enter the values of N and K:");
	scanf("%d%d",&N,&k);
	printf("Enter ordered of candies s:");
	scanf("%d",&s);
	if(s>=1&&s<=(N-k)){
		printf("NUMBER OF CANDIES SOLD : %d",s);
		printf("\nNUMBER OF CANDIES AVAILABLE : %d",N-s);
	}else{
		printf("INVALID INIPUT");
		printf("\nNUMBER OF CANDIES LEFT: %d",N);
	}
	return 0;
}
