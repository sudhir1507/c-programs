#include<stdio.h>
int main(){
	int side1,side2,side3;
	printf("Enter the side1 of tringle:");
	scanf("%d",&side1);
	printf("Enter the side2 of tringle:");
	scanf("%d",&side2);
	printf("Enter the side3 of tringle:");
	scanf("%d",&side3);
	(side1==side2&&side1==side3)?printf("Tringle is Equilateral program"):
	(side1==side2||side1==side3||side2==side3)?printf("Tringle is Isoscale"):
	printf("tringle is scalence");;
	return 0;
}
