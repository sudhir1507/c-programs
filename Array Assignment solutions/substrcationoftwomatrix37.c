#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the size :");
	scanf("%d",&n);
    int	a[n][n],b[n][n],c[n][n];
	printf("Enter the Elements of first matrix: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of first matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the Elements of second matrix: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nElements of second matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]-b[i][j];	
		}	
	}
	printf("\nResultant matrix :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
