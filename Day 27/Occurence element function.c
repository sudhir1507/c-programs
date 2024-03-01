#include<stdio.h>
void findOccurence(int a[],int);
int main(){
	int size,i;
	printf("Enter the size: ");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array elements:");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Occurences of Array Elements:\n");
	findOccurence(a,size);
}
void findOccurence(int a[],int size){
	int i,j,count=1;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		if(a[i]==a[i+1]){
			count++;
		}
		else{
			printf("\n%d---%d",a[i],count);
			count=1;
		}
	}
}
