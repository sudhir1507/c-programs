#include<stdio.h>
#include<string.h>
int main(){
	int choice,ccount=0,vcount=0,d=0,cc=0,sc=0,sum=0,i=0;
	FILE *fptr;
	char name[90];
	do{
		printf("\n1 : Write date in file");
		printf("\n2 : Read date from file");
		printf("\n3 :count the vowela and consonents ");
		printf("\n Enter the choice:\n");
		scanf("%d",&choice);
	switch(choice){
		case 1:
			fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\Day 30\\first.txt","w");
			char ch;
			scanf("%c",&ch);
		    printf("\nEnter the Data :\n");
	        gets(name);
//	        gets(name);
//	        _flushall();
            fputs(name,fptr);
	        fputc('\n',fptr);
	        fclose(fptr);
	        printf("\nData saved..");
		break;
		case 2:
			char ch;
			fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\Day 30\\first.txt","r");
			while(ch=fgetc(fptr)!=EOF){
				putchar(ch);
//			    char *ptr=fgets(name,30,fptr);
//				if(strlen(ptr)>0){
//    	            printf("\n%s",ptr);
//	            }
//				i++;	
			}
			fclose(fptr);		
		break;

		case 3:
			fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\Day 30\\first.txt","r");
		    while(name[i]!=-1){
		    	if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
			       vcount++;
		        }else if(isalpha(name[i]&&name[i]==' '))
				{
				     	ccount++;
					 }
		        i++;
			}
			fclose(fptr);
			printf("Number of vowels = %d and consonent= %d",vcount,ccount);
			break;
		case 4:
			fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\Day 30\\first.txt","r");
		    while(name[i]!=-1){
		    	if(isdigit(name[i])){
			       d++;
		        }else if(isalpha(name[i])){
		        	     cc++;
				}else{
					sc++;
				}
		        i++;
			}
			fclose(fptr);
			printf("Number of digits = %d and special symbols= %d and character =%d",d,sc,cc);
			break;
		case 5:
			fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\Day 30\\first.txt","r");
		    while(name[i]!=-1){
		    	
		    	if(isdigit(name[i])){
			       sum=sum+name[i]; 
		        }
		        i++;
			}
			fclose(fptr);
			printf("sum of digits in file=%d",sum);
			break;
		default:
			printf("Worng choice..");			
     }
	}while(1);
	
	return 0;
}
