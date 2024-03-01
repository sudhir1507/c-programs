//https://www.geeksforgeeks.org/recursive-c-program-linearly-search-element-given-array/
#include<stdio.h>
int searchValue(int a[],int);
int len;
int main(){
	int i,skey,a[10];
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of array:");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter skey:");
	scanf("%d",&skey);
	int s=searchValue(a,skey);
	if(s!=-1){
		printf("%d is present in array..!",skey);
	}else{
		printf("%d is not present in array..!",skey);
	}
	return 0;
}
int i=0;
int searchValue(int a[],int skey){
	if(i<len){
		if(a[i]==skey){
		   return i;
		}else{
			++i;
			return searchValue(a,skey);
		}
	}else{
		return -1;
	}
}
