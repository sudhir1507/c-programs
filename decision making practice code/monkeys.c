#include<stdio.h>
int main(){
	int n,k,j,m,p,b,pnt;
	printf("Enter the no of monkeys:");
	scanf("%d",&n);
	printf("Number of eatable bananas:");
	scanf("%d",&k);
	printf("Number of eatable peanuts:");
	scanf("%d",&j);
	printf("Total no of Bananas:");
	scanf("%d",&m);
	printf("Total no of peanuts:");
	scanf("%d",&p);
	if(n<0||k<0||j<0||m<0||p<0){
		printf("Invalid input");	
	}else{
		if(k>0){
			b=m/k;
			printf("%d",b);
		}
		if(j>0){
			pnt=p/j;
			printf("%d",pnt);
		}
		n=n-b-pnt;
		printf("\nTotal no of monkeys left on tree : %d",n);
	}
	return 0;
}
