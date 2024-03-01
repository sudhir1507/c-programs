#include<stdio.h>
int main(){
	int cp,sp;
	printf("Enter the cost price:");
	scanf("%d",&cp);
	printf("Enter the seiling price:");
	scanf("%d",&sp);
	if(sp>cp){
		printf("its PROFIT");
	}else{
		printf("its LOSS");
	}
	return 0;
	
}
