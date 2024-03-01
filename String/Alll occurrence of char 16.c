//find all occurrence of a character in a given string
#include<stdio.h>
void occurrenceAll(char ch[],char key){
	int i=0,pos;
	while(ch[i]!='\0'){
		if(ch[i]==key){
			printf("%d ",i);
		}
		i++;
	}
}
int main(){
	char key,ch[30];
	printf("Enter the string: ");
	gets(ch);
	printf("Enter the charector to get its first occurecence: ");
	scanf("%c",&key);
	printf("%c Occures at :");
	occurrenceAll(ch,key);
}
