// total no of alphabets,digts and special charectors of a string
#include<stdio.h>
void totalcountStr(char ch[]){
	int i=0,calpha=0,cdigit=0,csc=0;
	while(ch[i]!='\0'){
		if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')){
			calpha++;
		}else if(ch[i]>='0'&&ch[i]<='9'){
			cdigit++;
		}else{
			csc++;
		}
		i++;
	}
	printf("Total alphabets:%d\nTotal Digits:%d\nTotal special charectors:%d",calpha,cdigit,csc);
	
}
int main(){
	char ch[50];
	printf("enter the sting: ");
	gets(ch);
	totalcountStr(ch);
	return 0;
}
