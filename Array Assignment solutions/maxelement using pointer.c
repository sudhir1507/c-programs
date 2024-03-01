#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,size,j;

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
	int min=*(ptr);
	for(i=0;i<size;i++){
		if(min > *(ptr+i)){
			min = *(ptr+i);
		}
	}
	printf("\nMin is : %d",min);
	int max=*(ptr);
	for(i=0;i<size;i++){
		if(max< *(ptr+i)){
			max= *(ptr+i);
		}
	}
	printf("\nMax is : %d",max);
}
