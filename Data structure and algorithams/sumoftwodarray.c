#include<stdio.h>
int main(){
	int a[3][3],i,j;
	printf("Enter the Elements: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of array\n");
	for(i=0;i<3;i++){
		int sum=0;
		for(j=0;j<3;j++){
			sum=sum+a[i][j];
			printf("%d ",a[i][j]);
		}
		printf(" =%d\n",sum);
	}
}
