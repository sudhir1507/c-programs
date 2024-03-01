//27.Write a C program to print all ASCII character with their values.
#include<stdio.h>
void printASCII(int);
int main(){
	int ch=0;
	printASCII(ch);
	return 0;
}
void printASCII(int ch){
	if(ch<=256){
		printf("\nASCII of: %c = %d",ch,ch);
		printASCII(++ch);
	}
}
