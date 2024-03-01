#include<stdio.h>
int main(){
	int xx,yy;
	printf("Enter the cab charges:");
	scanf("%d%d",&xx,&yy);
	if(xx>yy){
		printf("Second");
	}else if(yy>xx){
		printf("First");
	}else{
		printf("Any");
	}
	return 0;
}
