#include<stdio.h>
int main(){
	int xx,yy;
	printf("Enter the valuse of xx and yy:");
	scanf("%d%d",&xx,&yy);
	if(1<=xx&&1<=yy){
		if(xx>=yy){
		    printf("Yes");
	   }else{
		    printf("No");
	   }
	}else{
		printf("Invalid input");
	}	
	
	return 0;
}
