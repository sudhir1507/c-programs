#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	char ch[30];
	fp=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\File handlinig practice\\index.txt","r");
    int len=strlen(ch);
    do{
	char *ptr=fgets(ch,len,fp);
    if(len>0){
    	printf("%s\n",ptr);
	}else{
		break;
	}
}while(1);
fclose(fp);
return 0;
}

