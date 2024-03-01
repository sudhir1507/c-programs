//Program to print an array in reverse order
#include<stdio.h>
void reversearray(int a[],int end,int mid,int start){
	if(start<mid){
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		--end;
		reversearray(a,end,mid,start);
}
}
int main(){
	int a[5],i,j,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array elements: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	 int mid=len/2;
	 int end=len-1;
	reversearray(a,end,mid,0);
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
