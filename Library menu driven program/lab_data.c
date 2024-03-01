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


