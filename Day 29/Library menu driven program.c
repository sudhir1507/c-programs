//structure
#include<stdio.h>
#include<stdlib.h>
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
	         }	
}
void displaybookinfo(int size,int i){
	printf("Display Book Information:\n");
			for(i=0;i<size;i++){
				printf("%d  %s  %s  %f\n",lab[i].id,lab[i].bookname,lab[i].authorname,lab[i].price);
			}
}
void listallbooks(int size,int i,char name[]){
	int flag=0,index;
	printf("List of All Books: ");
	        for(i=0;i<size;i++){
	        	int a=strcmp(name,lab[i].authorname)==0;
	        	
	        	if(a==1){
	        		flag=1;
	        		index=i;
	        		break;
	        	
				}
			}
			if(flag)
			{
					printf("%s",lab[index].bookname);
			}
			else{
				printf("Not Found");
			}
}
void specifiedbook(int no,int i,int size){
	for(i=0;i<size;i++){
		if(no==lab[i].id){
			printf("%s\n",lab[i].bookname);
		}
	}
			
}
void countbooks(int size,int i,int count){
	printf("List of count of  Books: ");
	        for(i=0;i<size;i++){
	        	count++;
			}
			printf("%d\n",count);
}
void idOrder(int i,int j,int size){
	printf("Access books in the order of accession ID\n");
			for(i=0;i<size;i++){
				for(j=i+1;j<size;j++){
					if(lab[i].id>lab[j].id){
						 struct Library temp=lab[i];
						 lab[i]=lab[j];
						 lab[j]=temp;
					}
				}
				for(i=0;i<size;i++){
					printf("%d  %s  %s  %f\n",lab[i].id,lab[i].bookname,lab[i].authorname,lab[i].price);
				}
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
	          lab=(struct Library*)calloc(size,sizeof(struct Library));
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
			idOrder(i,j,size);
			break;
		case 7:
			exit(0);
			break;
		default:
			printf("Worng choice");
	}
	printf("Do you want to continue:");
    ch=getch();
}while(ch=='Y'||ch=='y');
}
