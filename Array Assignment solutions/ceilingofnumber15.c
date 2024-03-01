#include<stdio.h>
int main(){
	int i,j,a[8],len,number;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number:");
	scanf("%d",&number);
		for(i=0;i<len;i++){
			if(number<=a[i]){
				printf("The ceiling of %d is:%d",number,a[i]);
			    break;
			}
		}
	}
	
