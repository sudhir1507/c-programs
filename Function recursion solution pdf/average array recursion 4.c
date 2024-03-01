//Program to calculate average of an array
#include<stdio.h>
float avgarray(int a[],int size);
int main(){
	int size,i;7
	printf("Size of array:");
	scanf("%d",&size);
	int a[size];
	printf("Enter Array Elements: ");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	float avg = avgarray(a,size);
	printf("Avarage is %f",avg);
	return 0;
}
int i=0,sum=0;
float avgarray(int a[],int size){
	if(i<size){
		sum=sum+a[i];
		i++;
		return avgarray(a,size);
    }else{
    	return sum/size;
	}
}
