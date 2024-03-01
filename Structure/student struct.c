#include<stdio.h>
struct student{
	int id;
	int marks;
	char name[20];
	int rollno;
}s1,s2;
int main(){
	printf("Enter the id, ,marks, name, rollno of student 1: ");
	scanf("%d%s%d%d",&s1.id,s1.name,&s1.marks,&s1.rollno);
	printf("\nStudent 1 data:%d %s %d %d",s1.id,s1.name,s1.marks,s1.rollno);
	printf("\nEnter the id, ,marks, name, rollno of student 2: ");
	scanf("%d%s%d%d",&s2.id,s2.name,&s2.marks,&s2.rollno);
	printf("\nStudent 2 data:%d %s %d %d",s2.id,s2.name,s2.marks,s2.rollno);
}
