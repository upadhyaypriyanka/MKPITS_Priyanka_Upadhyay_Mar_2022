#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter first integer\n");
	scanf("%d",&a);
	printf("Enter second integer\n");
	scanf("%d",&b);
	c=a+b;
	if(c>=10 && c<=20)
	{
		printf("30");
	}
	else
	{
		printf("%d",c);
	}
}