#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the size :");
	scanf("%d",&n);
    int	a[n][n];
	printf("Enter the Elements of matrix: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}
