#include<stdio.h>
int main(){
	int angle1,angle2,angle3;
	printf("Enter the first angle: ");
	scanf("%d",&angle1);
	printf("Enter the second angle: ");
	scanf("%d",&angle2);
	angle3=180-angle1-angle2;
	printf("\nThird angle of a tringle is: %d",angle3);
	return 0;
}
