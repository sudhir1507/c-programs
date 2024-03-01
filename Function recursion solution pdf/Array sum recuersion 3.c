//program to calculate sum of an array
#include<stdio.h>
int arraysum(int a[],int len);
int main(){
	int a[5],i,j,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array elements: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	int s=arraysum(a,len);
	printf("Sum of array is %d",s);
	return 0;
}
int i=0,sum=0;
int arraysum(int a[],int len){
	if(i<len){
		sum=sum+a[i];
		i++;
		return arraysum(a,len);
    }else{
    	return sum;
	}
}

