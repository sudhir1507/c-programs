#include<stdio.h>
int main(){
	int side1,side2,side3;
	printf("Enter the side1 of tringle:");
	scanf("%d",&side1);
	printf("Enter the side2 of tringle:");
	scanf("%d",&side2);
	printf("Enter the side3 of tringle:");
	scanf("%d",&side3);
	if(side1==side2&&side1==side3){
		printf("Tringle is equilateral tringle");
	}else if(side1==side2||side2==side3||side1==side3){
		printf("Tringle is isoscale");
	}else{
		printf("Tringle is scalene");
	}
	return 0;
}
