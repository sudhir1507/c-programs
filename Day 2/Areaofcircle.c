#include<stdio.h>
int main(){
	float redius,area,circumference,diameter;
	float PI=3.14;
	printf("Enter the redius : ");
	scanf("%f",&redius);
	diameter=2*redius;
	circumference=2*PI*redius;
	area=PI*redius*redius;
	printf("\nDiameter of circle: %f",diameter);
	printf("\nCircumference of circle : %f",circumference);
	printf("\nArea of circle :%f",area);
	return 0;
	
}
