#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char name[10];
	printf(" Enter name\n");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
}