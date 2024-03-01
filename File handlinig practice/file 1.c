#include<stdio.h>   /// Write in file using fputc single character
int main(){
	FILE *fptr;
	char ch;
	fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\File handlinig practice\\index.txt","w");
	printf("Enter character from Keyboard:\n");
	do{
		scanf("%c",&ch);
		if(ch=='$'){
			break;
		}
        fputc(ch,fptr);
    
    }while(1);//infinite loop
	fclose(fptr);
	return 0;
}

	

