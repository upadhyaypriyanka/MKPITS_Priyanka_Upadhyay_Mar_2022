#include<stdio.h>
#include<conio.h>
void main()
{
	float i1,i2,p1,p2,avg;
	printf("weight-item1 :\n");
	scanf("%f",&i1);
		printf("weight-item2 :\n");
	scanf("%f",&i2);
	printf("no. of item-1 purchases :\n");
	scanf("%f",&p1);
	printf("no. of item-2 purchases :\n");
	scanf("%f",&p2);
	avg=((i1*p1)+(i2*p2))/(p1+p2);
	printf("Average is : %f\n",avg);
}