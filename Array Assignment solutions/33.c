#include<stdio.h>
int main(){
	int a[10],i,j,temp,len;
	len= sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++){
	    if(a[i]==a[i+1]){
	    	a[i]=2*a[i];
	    	a[i+1]=0;
		}
	}
	printf("elements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
	    if(a[i]==0){
	    	temp=a[i];
	    	a[i]=a[j];
	    	a[j]=temp;
		}
	}
	}
	printf("\nelements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
}
