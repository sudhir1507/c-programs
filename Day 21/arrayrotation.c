#include<stdio.h>
int main(){
	int a[10],i,len,j=0,temp,pos;
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the element: ");
	for(i=0;i<len;i++){
	   scanf("%d",&a[i]);
	}
	printf("\nEnter the position from where you want to rotate array :");
	scanf("%d",&pos);
	printf("\nElements after %d position: ",pos);
	for(i=pos;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\nElement before %d position :",pos);
	for(i=0;i<pos;i++){
		printf("%d ",a[i]);
	}
	printf("\narray after rotation: ");
	while(pos){
		temp=a[0];
		for(i=0;i<len-1;i++){
			a[i]=a[i+1];
		}
		a[len-1]=temp;
		pos--;
	}
	for(i=0;i<len;i++){
	   printf("%d ",a[i]);
	}
	}
