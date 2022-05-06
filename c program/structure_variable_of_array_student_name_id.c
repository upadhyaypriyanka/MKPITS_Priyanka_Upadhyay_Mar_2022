#include<stdio.h>
#include<conio.h>
int i;
struct student{

	int id;
	char name[30];
} ;
 void main()
{
	struct student s[4];
	
	for(i=0;i<=3;i++){
	
	printf("enter student id\n");
	scanf("%d",&s[i].id);
	
	printf("enter student name\n");
	scanf("%s",s[i].name);
}
for(i=0;i<=3;i++){
	
	printf(" student id is =%d\n",s[i].id);
	printf(" student name is =%s\n",s[i].name);
}
	
	
	
}
	
	