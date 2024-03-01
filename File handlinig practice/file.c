#include<stdio.h>
struct ss{
		char name[30];
	
}s;

int main(){
	FILE *fptr;
	int id,fee;
	float per;
	fptr=fopen("temp0.txt","w");
	
	    printf("Enter id fee per and name");
	    scanf("%d%d",&id,&fee);
	    fprintf(fptr,"%d\t%d",id,fee);
	
	fclose(fptr);
}
