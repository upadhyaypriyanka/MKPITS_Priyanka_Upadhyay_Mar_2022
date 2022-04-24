#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(a=3;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("*");
			
		}
		printf("\n");
	}
}