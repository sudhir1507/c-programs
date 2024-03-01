#include<stdio.h>
int main(){
	char ch;
	printf("Enter the charecter:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'){
		printf("Charecter is LOWERCASE");
	}else{
	    printf("Charecter is UPERCASE");	
	}
}
