#include<stdio.h>
int main(){
	int physics,chemistry,biology,math,computer,sum,percentage;
	printf("Enter physics marks: ");
	scanf("%d",&physics);
	printf("Enter chemistry marks: ");
	scanf("%d",&chemistry);
	printf("Enter biology marks: ");
	scanf("%d",&biology);
	printf("Enter math marks: ");
	scanf("%d",&math);
	printf("Enter computer marks: ");
	scanf("%d",&computer);
	sum=physics+chemistry+biology+math+computer;
	percentage=sum*100/500;
	printf("percentage=%d\n",percentage);
//	percentage>=90?printf("Greade A"):percentage>=80?printf("Greade B"):percentage>=70?printf("Greade C"):percentage>=60?printf("Greade D"):percentage>=40?printf("Greade E"):printf("Greade F");;;;
    (percentage>=90&&percentage<100)?printf("Greade A"):
	(percentage>=80&&percentage<90)?printf("Greade B"):
	(percentage>=70&&percentage<80)?printf("Greade C"):
	(percentage>=60&&percentage<70)?printf("Greade D"):
	(percentage>=40&&percentage<60)?printf("Grade E"):
	printf("grade F");;;;;
//	percentage>=90?printf("Garede A"):printf("\n");
//	percentage>=80?printf("Garede B"):printf("\n");
//	percentage>=70?printf("Garede C"):printf("\n");
//	percentage>=60?printf("Garede D"):printf("\n");
//	percentage>=40?printf("Garede E"):printf("grade F");
	
	return 0;
}
