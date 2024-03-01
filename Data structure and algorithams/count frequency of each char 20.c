//find  frequency of each charector in a given string
#include<stdio.h>
#include<string.h>
void highFreq(char ch[],int len){
	char cf;
	int i,j,count;
	for(i=0;ch[i]!='\0';i++){
		count=1;
		for(j=(i+1);ch[j]!='\0';j++){
			if(ch[i]==ch[j])
			{
				count++;
				cf=ch[i];
			}
		}
		printf("%c-----%d\n",cf,count);
    }
}
int main(){
	char ch[30];
	printf("Enter the string: ");
	gets(ch);
	int len=strlen(ch);
	highFreq(ch,len);
}
