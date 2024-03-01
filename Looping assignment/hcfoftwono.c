#include<stdio.h>
int main(){
	int hcf,i=1,n1,n2;
	printf("Enter two numbers to calculate Hcf : ");
	scanf("%d %d",&n1,&n2);
	while(i<n1||i<n2){
		if(n1%i==0&&n2%i==0){
			hcf=i;
		}
		i++;
	}
	printf("%d",hcf);
	return 0;
}
