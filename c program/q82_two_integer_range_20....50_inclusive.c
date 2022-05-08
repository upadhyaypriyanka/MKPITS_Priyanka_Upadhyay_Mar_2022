#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("Enter first integer\n");
	scanf("%d",&x);
	printf("Enter second integer\n");
	scanf("%d",&y);
	
	if(x>=20 && x<=50 || y>=20 && y<=50  )
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}