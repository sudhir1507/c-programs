#include<stdio.h>
int main(){
	int i,j,r,c,flag=1;
	printf("Enter the rows and columns of  matrix:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of  matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of  matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	if(r==c){
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i==j&&a[i][j]!=1){
					flag=0;
					break;
				}
				if(i!=j&&a[i][j]!=0){
					flag=0;
					break;
				}
			}
		}
		if(flag){
			printf("The Matrix is an Identity matrix\n");
		}else{
			printf("The Matrix is Not an Identity matrix\n");
		}
	}
	else{
		printf("Matrix needs to be squre matrix..!");
	}
}

