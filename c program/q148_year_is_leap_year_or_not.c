#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter year\n");
	scanf("%d",&year);
	if(year%100==0 && year%400==0 || year%4==0)
	{
		printf("%d is leap year\n",year);
		
	}
	else
	{
		printf("%d is not leap year",year);
	}
}