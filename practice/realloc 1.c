#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,nthali,nmanp,osthali,emanp,i,ethali,fsize;
	printf("enter the number of thali:\n");
	scanf("%d",&nthali);//30
	nmanp=nthali/10; //3
	ptr=(int*)malloc(nmanp*sizeof(int)); //12
	printf("Enter the code for employee:");
	for(i=0;i<nmanp;i++){
		scanf("%d",&ptr[i]);
	}
	printf("Enter the on spot thali:\n");  //50
	scanf("%d",&osthali);
	if(osthali>nthali)
	{
	   ethali=osthali-nthali; //20
	   emanp=ethali/10; //2
	   ptr=(int*)realloc(ptr,emanp*sizeof(int));
	   printf("Enter tthe code for extra man:\n");
	   fsize=(emanp+nmanp);
	   for(i=nmanp;i<fsize;i++){
		scanf("%d",&ptr[i]);
	   }
	   printf("\nDisplay all employee code:\n");
	   for(i=nmanp;i<fsize;i++){
		printf("%d",ptr[i]);
	   }
	}
	
	
}
