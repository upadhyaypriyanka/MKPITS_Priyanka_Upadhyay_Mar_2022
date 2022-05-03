#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Capital characters\n");
	for(ch='A';ch<='Z';ch++)
	{
		printf("[%d=%c]\n",ch,ch);
	}
	printf("Small characters\n");
	for(ch='a';ch<='z';ch++)
	{
		printf("[%d=%c]\n",ch,ch);
	}
}