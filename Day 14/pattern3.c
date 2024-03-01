#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			
			if(i==2)
			  {printf("%d",j);
			  }
			else if(i==4){
				printf("%d",j+5);
			}else{printf("*");
			}
			  
		}
		printf("\n");
	}
}
