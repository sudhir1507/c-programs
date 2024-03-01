//structure
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Library{
	int id;
	char bookname[50];
	char authorname[60];
	float price;
	int flag;
};
struct Library *lab;
void addBook(int size,int i){
	for(i=0;i<size;i++){
               printf("Enter the Accession ID:");
	           scanf("%d",&lab[i].id);
	           printf("Enter the bookname:");
	           scanf("%s",&lab[i].bookname);
	           printf("Enter the Authorname:");
	           scanf("%s",&lab[i].authorname);
	           printf("Enter the price:");
	           scanf("%f",&lab[i].price);
	           printf("Book Status:");
	           scanf("%d",&lab[i].flag);
	         }	
}
void displaybookinfo(int size,int i){
	printf("Display Book Information:\n");
	printf("Accession id\tBookname\tAuthorname\tPrice\t\tBook Status\n");
			for(i=0;i<size;i++){
				printf("%d\t\t%s\t\t%s\t\t%f\t\t%d\n",lab[i].id,lab[i].bookname,lab[i].authorname,lab[i].price,lab[i].flag);
			}
}
void listallbooks(int size,int i,char name[]){
	int flag=1,index;
	printf("List of All Books:\n");
	printf("Bookname\n");
	        for(i=0;i<size;i++){
	        	int a=strcmp(name,lab[i].authorname)==0;
	        	if(a==1){
	        		flag=0;
	        		printf("%s\n",lab[i].bookname);
				}
			}
			if(flag)
			{
					printf("Not Found\n");
			}
			}

void specifiedbook(int no,int i,int size){
	printf("Bookname\n");
	for(i=0;i<size;i++){
		if(no==lab[i].id){
			printf("%s\n",lab[i].bookname);
		}
	}
			
}
void countbooks(int size,int i,int count){
	printf("List of count of  Books:\n");
	        for(i=0;i<size;i++){
	        	count++;
			}
			printf("%d\n",count);
}
void idOrder(int size){
	printf("Accession id\tBookname\tAuthorname\tPrice\t\tBook Status\n");
			for(int i=0;i<size;i++){
				for(int j=(i+1);j<size;j++){
					if(lab[i].id>lab[j].id){
						 struct Library temp=lab[i];
						 lab[i]=lab[j];
						 lab[j]=temp;
					}
				}
			}
				for(int i=0;i<size;i++){
					printf("%d\t\t%s\t\t%s\t\t%f\t\t%d\n",lab[i].id,lab[i].bookname,lab[i].authorname,lab[i].price,lab[i].flag);
				}
}
int main(){
	
	int choice,size,i,j,count=0,no;
	char name[30],ch;
	do{
	
	printf("1.Add book information.\n");
	printf("2.Display book information.\n");
	printf("3.List of all books given author.\n");
	printf("4.List of title of specified book.\n");
	printf("5.List the counts of books in library.\n");
	printf("6.List the books in the order of accession number.\n");
	printf("7.exit.\n");
	printf("Enter the choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			  printf("Number of books wants to add:");
              scanf("%d",&size);
	          lab=(struct Library*)malloc(sizeof(struct Library)*size);
              addBook(size,i);
			  break;
		case 2:
			displaybookinfo(size,i);
			break;
		case 3:
			printf("Author name: ");
			scanf("%s",&name);
			listallbooks(size,i,name);
			break;
		case 4:
			printf("Enter the id:");
			scanf("%d",&no);
			specifiedbook(no,i,size);
			break;
		case 5:
			countbooks(size,i,count);
			break;
		case 6:
			idOrder(size);
			break;
		case 7:
			exit(0);
			break;
		default:
			printf("Worng choice");
	}
	printf("Do you want to continue:");
	_flushall();
    scanf("%c",&ch);
}while(ch=='Y'||ch=='y');

return 0;
}
