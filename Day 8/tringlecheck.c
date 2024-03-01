#include<stdio.h>
int main(){
	int A1,A2,A3;
	printf("Enter the Angle1:");
	scanf("%d",&A1);
	printf("Enter the Angle2:");
	scanf("%d",&A2);
	printf("Enter the Angle3:");
	scanf("%d",&A3);
	if(A1+A2+A3==180){
		printf("tringle is Valid");
	}else{
		printf("Tringle is Not Valid");
	}
	return 0;
	
}
