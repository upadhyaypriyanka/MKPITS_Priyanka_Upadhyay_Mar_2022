#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter first integer\n");
	scanf("%d",&a);
	printf("Enter second integer\n");
	scanf("%d",&b);
	if(a==5 || b==5 || (a+b)==5 || (a-b)==5 || (b-a)==5)
	{
		printf("true\n");
	}
	else
	{
		printf("false");
	}
}