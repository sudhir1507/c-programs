#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,index,size,value,j;

	printf("Enter the size of array: ");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements of array: ");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
    printf("elements of array: ");
	for(i=0;i<size;i++){
		printf("%d ",*(ptr+i));
	}
	printf("Enter the index to delete value: \n");
	scanf("%d",&index);
	for(j=index;j<size;j++){
			*(ptr+j)= *(ptr+j+1);
		}
	printf("\nArray after deleteing elements");
	for(i=0;i<size-1;i++){
		printf("%d ",*(ptr+i));
	}
}
