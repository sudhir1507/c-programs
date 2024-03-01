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
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int ld=0,rd=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				ld=ld+a[i][j];
			}
			if(j==2-i){
				rd=rd+a[i][j];
			}
		}
	}
	printf("sum of left diagonal elements =%d\n",ld);
	printf("sum of right diagonal elements =%d\n",rd);
}
