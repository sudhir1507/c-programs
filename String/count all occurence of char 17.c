//count all occurrence of a character in a given string
#include<stdio.h>
int i=0,count=0;
int occurrenceCount(char ch[],char key){
	if(ch[i]!='\0'){
		if(ch[i]==key){
			count++;
		}
		i++;
		return occurrenceCount(ch,key);
    }else{
    	return count;
	}
}
int main(){
	char key,ch[30];
	printf("Enter the string: ");
	gets(ch);
	printf("Enter the charector to get its all occurecence: ");
	scanf("%c",&key);
	int c=occurrenceCount(ch,key);
	printf("%c occures %d times.",key,c);
}
