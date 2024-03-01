#include<stdio.h>
int main(){
	int xx;
	printf("Enter the current IQ of chef:");
	scanf("%d",&xx);
	if(100<=xx&&xx<=169){
	
		if(xx+7>=170){
			printf("Yes");
		}else{
			printf("No");
		}}
	else{
		printf("Invalid IQ");
	}
	
	return 0;
}
