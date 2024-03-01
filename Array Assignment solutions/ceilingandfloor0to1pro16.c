#include<stdio.h>
int main(){
	int i,j,a[6],len,c,f;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of array: ");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}	
    for(i=0; i<=10; i++)
	  {
        c=-1,f=-1;
		for(j=0;j<len;j++){
			if(i==a[j]){
				f=a[j];
				c=a[j];
				break;
			}
			else if(i<=a[j]){
				c=a[j];
				break;
			}
			else if(i>=a[j]){
				f=a[j];
			}
		}
		printf("Number: %d ceiling is: %d floor is:%d\n",i,c,f);
	}	
	}
