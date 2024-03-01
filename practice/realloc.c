/*“realloc” or “re-allocation” method in C is used to dynamically change the memory allocation 
of a previously allocated memory. In other words, if the memory previously allocated with the help of 
malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory. 
re-allocation of memory maintains the already present value and new blocks will be initialized 
with the default garbage value.*/
#include<stdio.h>
#include<stdio.h>
int main(){
	// This pointer will hold the
    // base address of the block created
	int *ptr,i,size,nsize;
	// Get the number of elements for the array
	printf("Enter the size of array;");
	scanf("%d",&size);
	// Dynamically allocate memory using calloc()
	ptr=(int*)calloc(size,sizeof(int));
	// Check if the memory has been successfully
    // allocated by malloc or not
	if(ptr==NULL){
		printf("Memory not allocated by calloc\n");
		exit(0);
	}else{
		printf("Meomory allocatd successfully\n");
		printf("Enter the array values:\n");
		for(i=0;i<size;i++){
			scanf("%d",(ptr+i));
		}
		printf("Display array elements:\n");
		for(i=0;i<size;i++){
			printf("%d ",*(ptr+i));
		}
		// Dynamically re-allocate memory using realloc()
		printf("\nEnter the new size of aaray:\n");
		scanf("%d",&nsize);
		ptr=(int*)realloc(ptr,nsize*sizeof(int));
		printf("Memory successfully re-allocated using realloc.\n");
		printf("Enter the new values in array:\n");
		int f=size+nsize;
		for(i=size;i<f;i++){
			scanf("%d",(ptr+i));
		}
		printf("Display the reallocated array:\n");
		for(i=0;i<f;i++){
			printf("%d ",*(ptr+i));
		}
		
		printf("size of f is:%d\n",f);
		printf("\n---------------------------------------------\n");
		for(i=0;i<size;i++){
			printf("%d ",*(ptr+i));
		}
		printf("size of size is:%d\n",size);
		printf("\n+++++++++++++++++++++++++++++++++++++++++++++++\n");
			for(i=0;i<nsize;i++){
			printf("%d ",*(ptr+i));
		}
			printf("size of nsize is:%d\n",nsize);
	}
	free(ptr);
	ptr=NULL;
}
