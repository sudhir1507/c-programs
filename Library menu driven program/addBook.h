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
