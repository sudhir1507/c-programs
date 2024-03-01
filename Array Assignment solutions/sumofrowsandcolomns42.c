#include<stdio.h>
int main(){
	int i,j,size,sum=0,k,len;
	printf("Enter the size of matrix:");
	scanf("%d",&size);
	int a[size][size];
//	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of array:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Sum of rows and coloms of the matrix is:\n");
	for(i=0;i<size;i++){
		sum=0;
		for(j=0;j<size;j++){
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("=%d",sum);
		printf("\n");
	}
	for(j=0;j<size;j++){
		sum=0;

		for(i=0;i<size;i++){
			
			sum=sum+a[i][j];
	
		}
		printf("%d ",sum);
		
	}
		
}
