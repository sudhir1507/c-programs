void displaybookinfo(){
	printf("Display Book Information:\n");
	printf("Accession id\tBookname\tAuthorname\tPrice\t\tBook Status\n");
			while(temp!=NULL){
				printf("%d\t\t%s\t\t%s\t\t%f\t\t%d\n",temp->id,temp->bookname,temp->authorname,temp->price,temp->flag);
				temp=temp->next;
			}
		temp=head;
}
