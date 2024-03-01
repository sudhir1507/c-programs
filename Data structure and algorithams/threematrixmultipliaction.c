#include<stdio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("Enter the Elements of first matrix: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of first matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the Elements of second matrix: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nElements of second matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			int sum=0;
			for(k=0;k<3;k++){
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	printf("\nResultant matrix :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
