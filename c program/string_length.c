#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int len;
	char name[20];
	printf("enter name\n");
	scanf("%s",name);
	
	len=strlen(name);
	printf("%d",len);	
	
}