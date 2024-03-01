#include<stdio.h>
int main(){
	int seconds,h,m;
	printf("Enter the seconds:");
	scanf("%d",&seconds);
	h=seconds/3600;
	m=(seconds-h*3600)/60;
    seconds=(seconds-h*3600-m*60);
    printf("H:M:S=%d\:%d\:%d",h,m,seconds);
	return 0;
}
