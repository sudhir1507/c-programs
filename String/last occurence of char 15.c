//find last occurrence of a character in a given string
#include<stdio.h>
int occurrenceLast(char ch[],char key){
	int i=0,pos;
	while(ch[i]!='\0'){
		if(ch[i]==key){
			pos=i;
		}
		i++;
	}
	return pos;
}
int main(){
	char key,ch[30];
	printf("Enter the string: ");
	gets(ch);
	printf("Enter the charector to get its first occurecence: ");
	scanf("%c",&key);
	int p=occurrenceLast(ch,key);
	printf("First occurencese of %c at %d",key,p);
}
