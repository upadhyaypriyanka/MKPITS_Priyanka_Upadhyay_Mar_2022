#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter first integer\n");
	scanf("%d",&a);
	printf("Enter second integer\n");
	scanf("%d",&b);
	if((a%10)==(b%10))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}