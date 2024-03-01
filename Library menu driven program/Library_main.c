//structure
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lab_data.h"
#include "addBook.h"
#include "displaybookinfo.h"
#include "listallbooks.h"
#include "specifiedBook.h"
#include "countbooks.h"
#include "idOrder.h"
int main(){
	int choice,no;
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
              addBook();
			  break;
		case 2:
			displaybookinfo();
			break;
		case 3:
			printf("Author name: ");
			scanf("%s",&name);
			listallbooks(name);
			break;
		case 4:
			printf("Enter the id:");
			scanf("%d",&no);
			specifiedbook(no);
			break;
		case 5:
			countbooks();
			break;
		case 6:
			idOrder();
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
