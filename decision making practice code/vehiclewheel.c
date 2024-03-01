#include<stdio.h>
int main(){
	int v,w,fw,tw;
	printf("Enter the total no of vehicle and wheels: ");
	scanf("%d %d",&v,&w);
	if(2<=w&&w%2==0&&v<w){
		fw=(w-2*v)/2;
		tw=v-fw;
		printf("tw=%d fw=%d",tw,fw);
	}else{
		printf("Invalid Input");
	}
	return 0;
}
