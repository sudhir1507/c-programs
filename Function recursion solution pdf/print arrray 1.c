//Program to print an array

#include<stdio.h>
int i=0;
void printarray(int a[],int len){
	if(i<len){
		printf("%d ",a[i++]);
		printarray(a,len);
	}
}
int main(){
	int a[5],i;
	int len=sizeof(a)/sizeof(a[0]);
	printf("Enter the Array elements: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printarray(a,len);
	return 0;
}
