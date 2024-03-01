#include<stdio.h>
int main(){
	int i,j;
	char ch=64;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1){
				printf("%d",j);
			}else if(i==2){
				printf("%c",ch+j);
			}else if(i==3){
				printf("%d",j+5);
			}else if(i==4){
				printf("%c",ch+j+5);
			}else{
				printf("%d",j+10);
			}
		}
		printf("\n");
	}
}
