#include<stdio.h>
#include<conio.h>
struct student{

	int id;
	char name[30];
} ;
 void main()
{
	struct student s1;
	struct student s2;
	
	printf("enter 1st student id\n");
	scanf("%d",&s1.id);
	
	printf("enter 1st student name\n");
	scanf("%s",s1.name);
	
	printf("1st student id is =%d\n",s1.id);
	printf("1st student name is =%s\n",s1.name);
	
	printf(" enter 2nd student id\n");
	scanf("%d",&s2.id);
	
	printf(" enter 2nd student name\n");
	scanf("%s",s2.name);
	
	printf("2nd student id is=%d\n",s2.id);
	printf("2nd student name is=%s\n",s2.name);
	
}
	
	