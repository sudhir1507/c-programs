#include<stdio.h>
int main(){
	int i,j,size,sum=0,len;
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
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(j==size-1-i){                     //3-2
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum of left diagonal =%d",sum);
	
	
}
