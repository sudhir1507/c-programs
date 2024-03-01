#include<stdio.h>
void findEvenOdd(int a[],int,int);
int main(){
	int i,size;
	printf("Enter the size: ");
	scanf("%d",&size);
	int a[size];
	printf("Elements of array:");
		for(i=0;i<size;i++){
			scanf("%d",&a[i]);
	}
	findEvenOdd(a,0,size);
	return 0;	
}
void findEvenOdd(int a[],int j,int size){
	int b[5],c[5],e=0,o=0;
	 for(j=0;j<size;j++){
	 	if(a[j]%2==0){
	 		b[e++]=a[j];
		 }
		 if(a[j]%2==1){
		 	c[o++]=a[j];	
		 }
		 }
	 printf("Even Elements of array: ");
	 int i=0;
	for(i=0;i<e;i++){
		printf("%d ",b[i]);
	}
	int k=0;
	printf("\nOdd Elements of array: ");
	for(k=0;k<o;k++){
		printf("%d ",c[k]);
	}
  }	
  
  
