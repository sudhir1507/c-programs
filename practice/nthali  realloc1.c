#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,nthali,nmanp,osthali,emanp,i,ethali;
	printf("enter the number of thali:\n");
	scanf("%d",&nthali);
	nmanp=nthali/10;
	ptr=(int*)malloc(nmanp*sizeof(int));
	printf("Enter the code for employee:");
	for(i=0;i<nmanp;i++){
		scanf("%d",&ptr[i]);
	}
	printf("Enter the on spot thali:\n");
	scanf("%d",&osthali);
	if(osthali>nthali){
	   ethali=osthali-nthali;
//	   emanp=ethali/10;
	   emanp=2;
	   ptr=(int*)realloc(ptr,emanp*sizeof(int));
	   printf("Enter tthe code for extra man:\n");
	   for(i=nmanp;i<(emanp+nmanp);i++){
		scanf("%d",&ptr[i]);
	   }
	   printf("\nDisplay all employee code:\n");
	   for(i=0;i<(emanp+nmanp);i++){
		printf("%d ",ptr[i]);
	   }
	}
	
	
}
