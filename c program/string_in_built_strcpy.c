#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[30],name1[30],a,b;
	printf("enter name\n");
	scanf("%s",name);
		printf("enter name1\n");
	scanf("%s",name1);
	
	strcpy(name,name1); //copy name1 into name;
	printf("%s",name);
	
}