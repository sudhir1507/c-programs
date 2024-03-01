//find highest frequency charector in a given string
#include<stdio.h>
#include<string.h>
void highFreq(char ch[],int len){
	int i,j,count,max=0;
	char cf;
	for(i=0;i<len;i++){
		count=1;
		for(j=0;j<len;j++){
			if(ch[i]==ch[j])
			{
				count++;
			}
		}
	   if(max<count){
	   	max=count;
	   	cf=ch[i];
	   }	
    }
    printf("HF is %c",cf);
}
int main(){
	char ch[30];
	printf("Enter the string: ");
	gets(ch);
	int len=strlen(ch);
	highFreq(ch,len);
//	printf("Highest frequency charector is : %c",c);
}
