#include<stdio.h>
int main(){
	int a[6],i,temp,j,len,index,value;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the element: ");
	for(i=0;i<(len-1);i++){
	   scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
 }
	printf("\nEnter the value and index: ");
	scanf("%d%d",&index,&value);
		for(i=len-2;i>=index;i--){
		    a[i+1]=a[i];
		}
		a[index]=value;	
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
