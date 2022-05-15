#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter number\n");
	scanf("%d",&a);
	if(a%10<=2 || a%10>=8)
	{
		printf("number is within 2 of a multiple of 10\n");
	}
	else
	{
		printf("not number is within 2 of a multiple of 10\n");
	}
}