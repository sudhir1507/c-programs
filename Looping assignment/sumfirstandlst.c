#include<stdio.h>
#include<math.h>
int main(){
	int last,no,p,count=0;
	printf("Enter the number :");
	scanf("%d",&no);
	int temp=no;
	last=no%10;
	while(no!=0){
		no=no/10;
		count++;
	}
	p=pow(10,--count);
	no=temp;
	no=no/p;
	printf("sum of first digit and last digit %d",no+last);
	return 0;
}
