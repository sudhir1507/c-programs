#include<stdio.h>
int main(){
	int a[5],i,j,temp,len,max,secmax;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the element: ");
	for(i=0;i<len;i++){
	   scanf("%d",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	max=a[0];
	for(i=0;i<len;i++){
			if(a[i]>max){
				secmax=max;
				max=a[i];
			}
	}
	printf("\nsecmax is:");
	if(secmax!=max && secmax!=0){
		printf("%d",secmax);
	}	
}
}
