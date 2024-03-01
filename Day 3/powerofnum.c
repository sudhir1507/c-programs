#include<stdio.h>
#include<math.h>
int main(){
	int base,power,number;
	printf("Eentr base: ");
	scanf("%d",&base);
	printf("Enter poewer : ");
	scanf("%d",&power);
	number=pow(base,power);
	printf("Number : %d",number);
	return 0;
	
}
