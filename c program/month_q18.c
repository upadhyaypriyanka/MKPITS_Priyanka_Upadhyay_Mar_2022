#include<stdio.h>
#include<conio.h>
void main()
{
	int day,year,month,days;
	printf(" Enter the number of days : ");
	scanf("%d",&day);
	
	year=day/365;
	
	month= (day%365)/30;
	
	days= (day%365)%30;
	
	printf(" year : %d\n",year);
	printf(" month : %d\n",month);
	printf(" day : %d\n",days);
}