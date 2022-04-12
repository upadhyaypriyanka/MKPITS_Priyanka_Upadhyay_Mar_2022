#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf(" Enter the value of a : ");
	scanf(" %d",&a);
	printf(" Enter the value of b : ");
	scanf(" %d",&b);
	if (a%b==0)
	{
		printf(" Division possible \n");
	}
	else
	{
		printf(" Division not possible ");
	}
}