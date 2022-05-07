#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter integer\n");
	scanf("%d",&a);
	if((100-a)<=10 || (200-a)<=10)
	{
		printf("true\n");
		
	}
	else
	{
		printf("false\n");
	}
	
}