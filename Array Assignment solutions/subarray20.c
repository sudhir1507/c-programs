#include<stdio.h>
int main(){
	int i,j,a[8],k,sum,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the sum :");      //subaaray sum
	scanf("%d",&sum);
	for(i=0;i<len;i++){
		int sum1=0;
		for(j=i;j<len;j++){
		  	sum1=sum1+a[j];
		    if(sum1==sum){
		    	printf("[%d..%d] --{ ", i, j);
		     	for(k=i;k<=j;k++){
		     		printf("%d ",a[k]);
					}
					printf("}\n");
			  }
		   }
	  }	
	}
	
