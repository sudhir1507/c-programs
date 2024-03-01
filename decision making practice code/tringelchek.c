#include<stdio.h>
int main(){
	int A1,A2,A3;
	printf("Enter the angles of tringle: ");
	scanf("%d%d%d",&A1,&A2,&A3);
	if(A1+A2+A3==180){
		printf("The Tringle is Valid");
	}else{
		printf("Not Valid");
	}
	return 0;
}
