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
	if(x+y==z || y+z==x || x+z==y)
	{
		printf("1");
	}
	else{
		printf("0");
		
	}
}