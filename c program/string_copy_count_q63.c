#include<stdio.h>
#include<conio.h>
void main()
{
	char ch1[30],ch2[30];
	int i;
	printf("Enter string : ");
	scanf("%s",ch1);
	for(i=0;ch1[i]!='\0';i++)
	{
		ch2[i]=ch1[i];
		
		//ch2[i]='\0';
		
		
		
	}
	printf("copied string : %s\n",ch2);
	printf("total charecter in string : %d\n",i);
}