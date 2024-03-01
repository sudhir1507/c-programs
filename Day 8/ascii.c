#include<stdio.h>
int main(){
	char ch;
	printf("Enter the charecter:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90){
		printf("Charecter is uperCASE");
	}else{
	    printf("Charecter is lowerCASE");	
	}
}
