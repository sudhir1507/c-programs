//find first occurrence of a character in a given string
#include<stdio.h>
int occurrenceFirst(char ch[],char key){
	int i=0;
	while(ch[i]!='\0'){
		if(ch[i]==key){
			break;
		}
		i++;
	}
	return i;
}
int main(){
	char key,ch[30];
	printf("Enter the string: ");
	gets(ch);
	printf("Enter the charector to get its first occurecence: ");
	scanf("%c",&key);
	int p=occurrenceFirst(ch,key);
	printf("First occurencese of %c at %d",key,p);
}
