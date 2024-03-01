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
