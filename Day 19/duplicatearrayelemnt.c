#include<stdio.h>
int main(){
	char a[5],val,j;
	int i;
	printf("Enter the elements if arrays: ");
	for(i=0;i<5;i++){
		scanf("%c",&a[i]);
	}
	printf("\nElements of array: ");
	for(i=0;i<5;i++){
		printf("%c",a[i]);
	}
	printf("\nElements of array in by replacing some digits by specail symbol: ");
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]==a[j])
			{
			    a[j]=34;	
			}
		}
		printf("%c",a[i]);
	}
}
