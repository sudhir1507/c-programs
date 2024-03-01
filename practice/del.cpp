int del=0;        //this varible is used as counter to when you delete record then it will get increase
//this function is used to delete record in between the ll
void deleteOwner(){
	struct Flat *temp,*temp1,*temp2;
	int value,flag=0;
	if(head==NULL){                 //it chaek if head is null means  no flats are allcated
		printf("\nFlats Are Not Allocated..!");
	}else if(head->next!=NULL){
		printf("\nEnter flat no to delete Owner: ");          //it will delete first reacord and head moves to next node
	 	scanf("%d",&value);
		if(head->flatno==value){
			temp1=head->next;
			head->next=NULL;
			free(head);
			head=temp1;
		}
		del++;
	}
	else{
		printf("\nEnter flat no to delete Owner: ");         //this block of code excecute if the record we want to delete is other than first record
	 	scanf("%d",&value);
	 	temp=head;
		while(temp!=NULL){                        
			if(temp->flatno==value){         //this condition cheak if flatno is there in the record or not if found flag reset to 1 and break loop 
				flag=1;
				temp2=temp->next;
				break;
			}
			temp1=temp;
			temp=temp->next;
		}
		if(flag){           
			temp1->next=temp2;
			temp->next=NULL;
			free(temp);
			temp=NULL;
			printf("\nDeleted Successfully..!");
			del++;
		}else{
			printf("\nFlat Number Not Found..!\n");
		}
	}
//	return del;
}
