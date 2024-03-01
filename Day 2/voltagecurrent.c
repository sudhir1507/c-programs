#include<stdio.h>
int main(){
	float V,I,R;
	printf("enter the Current: ");
	scanf("%f",&I);
	printf("enter the Resistance: ");
	scanf("%f",&R);
	V=I/R;
	printf("\nvoltagae :%f",V);
//	I=V*R;
	printf("\ncurrent : %f",I);
//	R=I/V;
	printf("\nResistance : %f",R);

	return 0;
}
