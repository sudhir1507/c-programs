#include<stdio.h>
int main(){
	float length,breath,perimeter;
	printf("Enter the length : ");
	scanf("%f",&length);
	printf("\nEnter the breath : ");
	scanf("%f",&breath);
	perimeter=2*(length+breath);
	printf("\nPerimeter of reactangle :%.3f",perimeter);
	
}
