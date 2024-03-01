#include<stdio.h>
int main(){
	int  num,count=0;
	printf("Enter the number :");
	scanf("%d",&num);
	num>0?count++:printf("\n");
	num=num/10;
	num>0?count++:printf("\n");
	num=num/10;
	num>0?count++:printf("\n");
	num=num/10;
	num>0?count++:printf("\n");
	num=num/10;
	num>0?count++:printf("\n");
	num=num/10;
	printf("%d",count);
	return 0;
	
}
