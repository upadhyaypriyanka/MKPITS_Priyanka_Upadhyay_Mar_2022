#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter first integer\n");
	scanf("%d",&a);
	printf("Enter second integer\n");
	scanf("%d",&b);
	if((a==30) || (b==30) || (a+b==30))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
}