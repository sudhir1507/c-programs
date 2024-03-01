void countbooks(){
	int count=0;
	printf("Number of Books:\n");
	        while(temp!=NULL){
	        	count++;
	        	temp=temp->next;
			}
			printf("%d\n",count);
		temp=head;
}
