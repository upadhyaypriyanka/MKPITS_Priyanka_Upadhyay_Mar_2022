#include<stdio.h>
#include<conio.h>
struct student{

	int id;
	char name[30];
} ;
 void main()
{
	struct student s1={45,"raj"};
	
	struct student s2={46,"ram"};
	
	
	
	printf("1st student id is =%d\n",s1.id);
	printf("1st student name is =%s\n",s1.name);
	
	
	
	printf("2nd student id is =%d\n",s2.id);
	printf("2nd student name is =%s\n",s2.name);
	
}
	
	