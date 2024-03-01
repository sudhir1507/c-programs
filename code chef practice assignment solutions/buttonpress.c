#include<stdio.h>
int main(){
	int xx,yy;
	printf("Enter the values of xx and yy: ");
	scanf("%d%d",&xx,&yy);
	if(1<=xx&&xx<=100&&1<=yy&&yy<=100){
	   if(xx>yy){
	      printf("volume decrease by %d",xx-yy);
	   }else{
	     printf("volume increase by %d",yy-xx);
       }
	}else{
		printf("Invalid input");
	}
	
	return 0;
}
