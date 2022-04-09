#include<stdio.h>
#include<conio.h>
void main()
{
	int day,year,week,month;
	printf("Enter the day\n");
	scanf("%d",&day);
	
	year=(day/365);

	week=(day%365)/7;
	
	day=day-((year*365)+(week*7));
	
	printf("year : %d\n",year);
	printf("week : %d\n",week);
	printf("day : %d\n",day);
}