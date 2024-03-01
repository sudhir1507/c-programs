#include<stdio.h>
#include<math.h>
int main(){
	float P,T,R,CI,Amount;
	printf("Enter the principle amount: ");
	scanf("%f",&P);
	printf("Enter the Time period: ");
	scanf("%f",&T);
	printf("Enter the Rate of interest: ");
	scanf("%f",&R);
	Amount= P*(pow((1+R/100),T));
	CI=Amount-P;
	printf("Amount is:%.3f",Amount);
	printf("\nCompound Interest CI : %.3f",CI);
	return 0;
	
}
