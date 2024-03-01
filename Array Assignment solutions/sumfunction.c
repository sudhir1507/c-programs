#include<stdio.h>
int sum(int, int);
int main(){
	int a,b;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
	int result=sum(a,b);
	printf("\nresult is %d",result);
}
int sum(int x,int y){
	return x+y;
}
