#include<stdio.h>
int findMejority(int a[],int);
int main(){
	int size,i;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int a[size];
	int l=size/2;
	printf("Elements of array:");
		for(i=0;i<size;i++){
			scanf("%d",&a[i]);
		}
	
	int r=findMejority(a,size);
	if(r==1){
		printf("yes");
	}else {
		printf("No");
	}
	return 0;
	
}
int findMejority(int a[],int size){
	int i,j,count,flag=1;
	for(i=0;i<size;i++){
		 count=1;
		 for(j=i+1;j<size;j++){
		 	if(a[i]==a[j]){
				count++;
			}
			}
			if(count>size/2){
				return 1;
				flag=0;
				break;
		 }	
		}
	if(flag==1){
		return 0;
		}	
}

