//Write a C program to print all alphabets from a to z. - using while loop
#include<stdio.h>
void allAlphabets(char);
int main(){
	int ch=97;
    
    allAlphabets(ch);
    return 0;
}
void allAlphabets(char ch){
	if(ch<=122){
		printf("%c ",ch++);
		allAlphabets(ch);
	}
}
