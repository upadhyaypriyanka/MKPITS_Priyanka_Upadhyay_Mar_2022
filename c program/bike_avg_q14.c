#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	float b,avg;
	printf("enter the total distane in km : ");
	scanf("%d",&a);
	printf("enter the fuel spent in liter : ");
	scanf("%f",&b);
	avg=a/b;
	printf("Average consumption (km/lit) : %.2f\n",avg);
}