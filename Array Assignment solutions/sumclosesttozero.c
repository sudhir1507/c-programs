#include<stdio.h>
#include <math.h>
int main(){
	int i,j,a[10],l,r,len,sum,smallest;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	smallest=a[0]+a[1];
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			  sum=a[i]+a[j];
		     if(abs(smallest)>abs(sum)){
		     	smallest=sum;
		     	l=i;
		     	r=j;
			 }	
	     }	
    }
printf("The pair of elements whose sum is minimum are [%d, %d]",a[l],a[r]);
}
