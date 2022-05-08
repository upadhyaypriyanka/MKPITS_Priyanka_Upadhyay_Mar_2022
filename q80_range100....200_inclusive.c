#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("Enter first integer\n");
	scanf("%d",&x);
	printf("Enter second integer\n");
	scanf("%d",&y);
	if(x>=100 && x<=200 || y>=100 && y<=200)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}