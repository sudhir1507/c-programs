#include<stdio.h>
int main(){
	int i,j,size,sum=0,k,len;
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
	printf("\nLower tringular matrix:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(i<=j){
			   printf("%d ",a[i][j]);
			}else{
				printf("0 ");
			}
		}
		printf("\n");
	}
			
}
