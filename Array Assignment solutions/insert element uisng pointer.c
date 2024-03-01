#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,index,size,value,j;

	printf("Enter the size of array: ");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements of array: ");
	for(i=0;i<size-1;i++){
		scanf("%d",(ptr+i));
	}
    printf("elements of array: ");
	for(i=0;i<size-1;i++){
		printf("%d ",*(ptr+i));
	}
	printf("Enter the index and value :\n");
	scanf("%d%d",&index,&value);
	for(j=size-1;j>=index;j--){
			*(ptr+j+1)= *(ptr+j);
		}
		*(ptr+index)=value;
	
	printf("Array after inserting elements");
	for(i=0;i<size;i++){
		printf("%d ",*(ptr+i));
	}
}
