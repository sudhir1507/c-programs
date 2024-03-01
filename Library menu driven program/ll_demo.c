//structure
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Library{
	int id;
	struct Library *next;
};
struct Library *head=NULL; //first node
//struct Library *temp,*temp1,*temp2;


void addBook(){
struct Library *temp;
	// create new Node
	struct Library * newNode=(struct Library*)malloc(sizeof(struct Library));
	     	  printf("\n Enter id:");
	     	  scanf("%d",&newNode->id);
	     	  newNode->next=NULL;
	  if(head==NULL)
	     {	     	
			    head=newNode; 
		 }
		 else
		   {
		        temp=head;
				while(temp->next!=NULL)
				  {
				  	temp=temp->next;
					 }   
					 temp->next=newNode;
		   }
}
void displaybookinfo(){
	struct Library *temp;
    temp=head;
      while(temp->next!=0)
         {
         	 printf("\n id=%d",temp->id);
         	 printf("\t temp add= %u\t temp next add=%u",temp,temp->next);
         	 temp=temp->next;
		 }
		 printf("\n temp add=%u",temp);
		 printf("\t temp next=%u",temp->next);
}
void deleteBook(int bid)
{
	int flag=1;
	 struct Library *temp,*temp1;
	 temp=head;
	 if(head->id==bid)
	 {
	 	head=head->next;
	 	  	free(temp);
	      	temp=NULL;
	 }
	 else
	 {
	 
    printf("\n*** id=%d",temp->id);	
	 while( temp->id!=bid && temp!=0 )
	  {
	  	//if(temp->next==0)break;
	  	printf("\n### temp id=%d",temp->id);
	  	printf("\t### temp->next=%u",temp->next);
	  	temp1=temp;
	  	temp=temp->next;
	  	flag=0;
	  }
	  	printf("\n$$$ 1 temp =%d",temp);
	    if(temp!=0)
	      {
	      	printf("\n$$$$ book found");
	      	temp1->next=temp->next;
	      	free(temp);
	      	temp=NULL;
		  }
		  else
		  {
		  	printf("book not found");
		  }
     }
}
int main(){
	
	addBook();//11
	addBook();//22
	addBook();//33
	displaybookinfo();
//	printf("\nbook deleted : 22");
  //   deleteBook(222);
    // displaybookinfo();
return 0;// normal termination
}
