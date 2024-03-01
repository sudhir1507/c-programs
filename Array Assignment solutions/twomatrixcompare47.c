#include<stdio.h>
int main(){
	int i,j,r,c,r1,c1,flag=1,len;
	printf("Enter the rows and columns of first matrix:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of first matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of first matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the rows and columns of second matrix:");
	scanf("%d%d",&r1,&c1);
	int b[r1][c1];
	printf("Enter the elements of second matrix: ");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nElements of second matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	if(r==r1&&c==c1){
		printf("Two matrix can be compared:\n");
		for(i=0;i<r;i++){
		    for(j=0;j<c;j++){
			   if(a[i][j]!=b[i][j]){
			   	   flag=0;
			   	   break;
			    }
		      }
	      }
	     if(flag){
		     printf("Two matrix are identical\n");
	     }else{
		     printf("Two matrix are not identical");
	     }
	}else{
		printf("Two matrix can not be compared..\n");
	}		
}
