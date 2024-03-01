#include<stdio.h>
int evenodd(int);
int main(){
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	int result=evenodd(a);
	if(result==1){
		printf("\nresult is even");
	}else{
		printf("\nresult is odd");
	}
	return 0;
}
int evenodd(int x){
	if(x%2==0){
		return 1;
	}else{
		return -1;
	}
}
