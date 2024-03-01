#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	char name[50];
	fp=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\File handlinig practice\\index.txt","a");
    printf("Enter the data :");
    gets(name);
    fputs(name,fp);
    fputc('\n',fp);
    fclose(fp);
    printf("\nData saved..");
    return 0;
}
