#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("Enter first integer\n");
	scanf("%d",&x);
	printf("Enter second integer\n");
	scanf("%d",&y);
	printf("Enter third integer\n");
	scanf("%d",&z);
	if(x>=20 && x<=50 || y>=20 && y<=50 || z>=20 && z<=50)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}