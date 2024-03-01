#include<stdio.h>
#include<string.h>
int main(){
	int i;
 char first[5][90];// college - 
 printf("\nEnter data in strings\n");
 for(i=0;i<5;i++){
 	gets(first[i]);
 }
 printf("\nDisplay string values\n");
 for(i=0; i<5;i++){
 	  printf("%s\n",first[i]);
 }
  

	return 0;
}

