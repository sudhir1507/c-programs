#include<stdio.h>
int main(){
	int no;
	printf("1. Jan 2. Feb 3. March 4.April 5.May 6.June 7.July 8.Aug 9.Sep 10.Oct 11.Nov 12.Dec");
	printf("\nEnter the month number:");
	scanf("%d",&no);
	switch(no){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("31");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		printf("30");
		break;
		case 2:
		printf("28");
		break;
		default :
		printf("Wrong input");	
	}
	return 0;
}
