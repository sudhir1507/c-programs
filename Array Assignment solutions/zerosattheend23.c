#include<stdio.h>
int main(){
	int a[10],i,r,l,len,j=0;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
    printf("elements of array: ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	l=0;
	r=len-1;
	while(r>l){
		while(a[l]!=0)   //: 2 5 7 0 4 0 7 -5 8 0
		  l++;  //3
		while(a[r]==0)  //
		  r--;   //7
		if(l<r){
			int temp=a[l];
			a[l]=a[r];
			a[r]=temp;
		}                   //2 5 7 8 4 -5 7 0 0 0
	}
	printf("\nElemnts of array after moving zeros at the end\n");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
