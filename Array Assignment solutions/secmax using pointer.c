#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,secmax,size,j;

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
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if( *(ptr+i) > *(ptr+j)){
				int temp= *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	int max = *(ptr);
	for(i=0;i<size;i++){
		if(max < *(ptr+i)){
			secmax = max;
			max = *(ptr+i);
		}
	}
	printf("\nsecmax is : %d",secmax);
}
