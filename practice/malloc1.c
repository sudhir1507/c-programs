#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("Enter the values in array:\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	printf("\nDisplay Array values:\n");
	for(i=0;i<size;i++){
		printf("%d ",*(ptr+i));
	}
}
