#include<stdio.h>
int main(){
	char ch;
	printf("Enter the alphabet: ");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90){
		ch=ch+32;
	}
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Charecter is vowel");
			break;
		default:
			printf("Charecter is consonent");
	}
	return 0;
}
