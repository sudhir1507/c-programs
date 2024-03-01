#include<stdio.h>
int main(){
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	switch(no%2==0){
		case 0:
			printf("ODD");
			break;
		case 1:
			printf("EVEN");
			break;
		default:
			printf("Enter valid Number");
	}
	return 0;
}
