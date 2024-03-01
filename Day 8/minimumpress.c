#include<stdio.h>
int main(){
	int xx,yy;
	printf("Enter the values of xx and yy: ");
	scanf("%d%d",&xx,&yy);
	if(xx>yy){
	    printf("volume decrease by %d",xx-yy);
	}else{
	    printf("volume increase by %d",yy-xx);
	}
	
	return 0;
}
