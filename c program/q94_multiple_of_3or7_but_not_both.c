#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter positive number\n");
	scanf("%d",&a);
	if(a%3==0 && a%7!=0)
	{
		printf("1");
	}
	else 
	if(a%7==0 && a%3!=0)
	{
		printf("1");
	}
	else

	{
		printf("0");
	}
}