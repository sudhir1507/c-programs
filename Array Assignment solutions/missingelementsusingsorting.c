#include<stdio.h>
int main(){
	int i,a[5],j,len,diff;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++){
		diff=a[i+1]-a[i];
		if(diff>1){
			for(j=a[i]+1;j<(a[i+1]);){
				printf("%d ",j++);
			}
		}
		
	}
}
