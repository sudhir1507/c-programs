#include<stdio.h>
#include<math.h>
int main(){
	int last,no,p,count=0;
	printf("Enter the number :");
	scanf("%d",&no);
	int temp=no;
	last=no%10;   //123 3
	while(no!=0){
		no=no/10;
		count++;    //3
	}
	p=pow(10,--count);   //100
	no=temp;            //1
	no=no/p;
	printf("first digit %d and last digit %d",no,last);
	return 0;
}
