#include<stdio.h>
int main(){
	char a[10];
	int i;
	printf("Enter the elements if arrays: ");
	for(i=0;i<10;i++){
		scanf("%c",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<10;i++){
		printf("%c",a[i]);
	}
	printf("\nElements of array in by replacing some digits by specail symbol: ");
	for(i=0;i<10;i++){
		if(i>5){
			a[i]=34;
		}
		printf("%c",a[i]);
	}
}
