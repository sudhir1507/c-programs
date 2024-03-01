#include<stdio.h>    // reading single character form file
int main(){
	FILE *fptr;
	char ch;
	fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\File handlinig practice\\index.txt","r");
    do{
    	ch=fgetc(fptr);
    	printf("%c",ch);
    	if(ch==-1){
    		break;
		}
	}while(1);
	printf("End of file..");
}
