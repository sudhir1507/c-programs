#include<stdio.h>
int main(){
	int i,j,size,count=0;
	printf("Enter the size of matrix:");
	scanf("%d",&size);
	int a[size][size];
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
			if(a[i][j]==0){
			   count++;
			}
		}
	}
	size=size*size;
	if(count>(size/2)){
		printf("Matrix is sparse\n");
	}else{
		printf("Matrix is not sparse\n");
	}
	return 0;		
}
