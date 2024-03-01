#include<stdio.h>
int main(){
	float X,Y;
	printf("Enter withdrawal amount and balance:");
	scanf("%f%f",&X,&Y);
	if(0<X&&X<=2000&&0<=Y&&Y<=2000){
		if(X>Y){
		  printf("%.2f",Y);
	    }else if((int)X%5==0){
		    Y=Y-X-0.5;
		    printf("%.2f",Y);
	    }else{
		    printf("%.2f",Y);
	    }
	}else{
		printf("Invalid input");
	}
	
}
