#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("Enter the number to find squareroot: ");
	scanf("%d",&number);
	number=sqrt(number);
	printf("square root of number is: %d",number);
	return 0;
}
