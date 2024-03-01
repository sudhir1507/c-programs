#include<stdio.h>
int main(){
	int i,j,r,c;
	printf("Enter row and columns: ");
	scanf("%d%d",&r,&c);
	int a[r][c],b[c][r];
	printf("Enter the Elements of first matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of first matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){	
				b[j][i]=a[i][j];
		}
	}
	printf("Transpose matrix :\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
