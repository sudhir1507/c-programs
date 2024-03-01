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
	struct Library *next;
};
struct Library *head=NULL;
struct Library *temp,*temp1,*temp2;

void addBook(){
	if(head==NULL){
		head=(struct Library*)malloc(sizeof(struct Library));
	    printf("Enter the Accession ID:");
	    scanf("%d",&head->id);
	           printf("Enter the bookname:");
	           scanf("%s",&head->bookname);
	           printf("Enter the Authorname:");
	           scanf("%s",&head->authorname);
	           printf("Enter the price:");
	           scanf("%f",&head->price);
	           printf("Book Status:");
	           scanf("%d",&head->flag);	
	           head->next=NULL;
	}else{
		temp=(struct Library*)malloc(sizeof(struct Library));
	    printf("Enter the Accession ID:");
	    scanf("%d",&temp->id);
	    printf("Enter the bookname:");
	    scanf("%s",&temp->bookname);
	    printf("Enter the Authorname:");
	    scanf("%s",&temp->authorname);
	    printf("Enter the price:");
	    scanf("%f",&temp->price);
	    printf("Book Status:");
	    scanf("%d",&temp->flag);
	    temp->next=head;
	    head=temp;
	}
	
}
void displaybookinfo(){
	printf("Display Book Information:\n");
	printf("Accession id\tBookname\tAuthorname\tPrice\t\tBook Status\n");
			while(temp!=NULL){
				printf("%d\t\t%s\t\t%s\t\t%f\t\t%d\n",temp->id,temp->bookname,temp->authorname,temp->price,temp->flag);
				temp=temp->next;
			}
		temp=head;
}
void listallbooks(char name[]){
	int flag=1;
	printf("List of All Books:\n");
	printf("Bookname\n");
	        while(temp!=NULL){
	        	int a=strcmp(name,temp->authorname)==0;
	        	if(a==1){
	        		flag=0;
	        		printf("%s\n",temp->bookname);
				}
				temp=temp->next;
			}
			if(flag)
			{
					printf("Not Found\n");
			}
		temp=head;
}

void specifiedbook(int no){
	printf("Bookname\n");
	while(temp!=NULL){
		if(no==temp->id){
			printf("%s\n",temp->bookname);
		}
		temp=temp->next;
	}
	temp=head;
}
void countbooks(){
	int count=0;
	printf("List of count of  Books:\n");
	        while(temp!=NULL){
	        	count++;
	        	temp=temp->next;
			}
			printf("%d\n",count);
		temp=head;
}

void idOrder(){
	printf("Accession id\tBookname\tAuthorname\tPrice\t\tBook Status\n");
			temp1=head;
			while(temp1!=NULL){
			        temp2=temp1->next;
					while(temp2!=NULL){
						 if(temp1->id>temp2->id){
						 	 struct Library *temp3=temp1->id;
						     temp1->id=temp2->id;
						     temp2->id=temp3;
						 }
						 temp2=temp2->next;
					}
					temp1=temp1->next;
				}
		temp=head;
		while(temp!=NULL){
			printf("%d\t\t%s\t\t%s\t\t%f\t\t%d\n",temp->id,temp->bookname,temp->authorname,temp->price,temp->flag);
			temp=temp->next;
				}		
				
}
			



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
