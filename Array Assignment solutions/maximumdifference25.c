#include<stdio.h>
#include<math.h>
int main(){
	int i,j,a[6],len,diff,max=0;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
		   diff=a[j]-a[i];
				if(max<diff){
					max=diff;
				}
			}
		}
	printf("Maximum difference between two elements in the array:%d",max);
}
	
