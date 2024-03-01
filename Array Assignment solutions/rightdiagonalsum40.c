#include<stdio.h>
int main(){
	int i,j,size,sum=0,len;
	printf("Enter the size of matrix:");
	scanf("%d",&size);
	int a[size][size];
//	len=sizeof(a)/sizeof(a[0]);
		printf("Enter the elements of matrix: ");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of matrix:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum of right diagonal =%d",sum);
	
	
}
