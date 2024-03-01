#include<stdio.h>
int main(){
	int i,a[8],diff,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nSmallest is :");
	for(i=0;i<len;i++){
		diff=a[i+1]-a[i];
		if(diff>1){
			printf("%d",a[i]+1);
			break;
		}
	}	
}
