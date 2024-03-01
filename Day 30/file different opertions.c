#include<stdio.h>
int main(){
	FILE *fptr;
//	char ch[90];
	char c;
	int i,count=0;
	fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\Day30\\test1.txt","r");
//	printf("\nEnter the data in file :\n");
//	gets(ch);
//	fprintf(fptr,ch);
//	printf("\nData saved successfully.."); 

	while((c=fgetc(fptr))!=EOF)
	{ printf("val c=%s",c);
	      printf("hiii");
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			count++;
		}
	
	}
	printf("\nNumber of vowels: %d",count);
	fclose(fptr);
	return 0;
}
