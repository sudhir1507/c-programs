#include<stdio.h>
int main(){
	int xx;
	printf("Enter the valuse of xx :");
	scanf("%d",&xx);
	if(0<=xx&&xx<=1000){
		if(xx>=750){
		printf("Yes");
	     }else{
		    printf("No");
	    }
	}else{
		printf("Invalid input");
	}
	return 0;
}
