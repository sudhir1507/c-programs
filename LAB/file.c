#include<stdio.h>
int main(){
	FILE *fp;
	char ch[50];
	fp=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\library management system\\logininfo.txt","w");
	if(fp==NULL){
		printf("File nt open");
		
	}else{
	 printf("Enter string");
	 gets(ch);
	 fputs(ch,fp);
	}
	fclose(fp);
	return 0;
}
