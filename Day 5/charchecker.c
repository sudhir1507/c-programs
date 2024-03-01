#include<stdio.h>
int main(){
	char ch;
	printf("Enter the char: ");
	scanf("%c",&ch);
	((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("Entered charector is Charector"):ch>='0'&&ch<='9'?printf("Entered charector is Digit"):printf("Entered Charector is special symbol");;
	return 0;
	
}
