#include<stdio.h>
int main(){
	int A1,A2,A3;
	printf("Enter the angles of tringle: ");
	scanf("%d%d",&A1,&A2);
	A3=180-A1-A2;
	printf("Third angle is %d",A3);
	return 0;
}
