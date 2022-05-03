#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("list of integer equivalents of letter\n");
	printf("small letter's integer\n");
	for(ch='a';ch<='z';ch++)
	{
		printf("%d\n",ch);
	}
	printf("capital letter's integer\n");
	for(ch='A';ch<='Z';ch++)
	{
		printf("%d\n",ch);
	}
}