#include<stdio.h>
#include<math.h>
int main(){
	int i,j,a[8],len,diff,count=0;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the difference :");
	scanf("%d",&diff);
		for(i=0;i<len;i++){
			for(j=i+1;j<len;j++){
			  if(abs(a[i]-a[j])==diff){
				count++;
			}
		}
	}
	printf("Number of distinct pairs for difference %d are:%d",diff,count);
	
	}
	
