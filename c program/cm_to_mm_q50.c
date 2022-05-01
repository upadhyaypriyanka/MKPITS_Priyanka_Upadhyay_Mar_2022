#include<stdio.h>
#include<conio.h>
void main()
{
	float cen,inc,mm=2.54;
	printf("Enter distance in centimeters\n");
	scanf("%f",&cen);
	inc=cen/mm;
	printf(" distance of %.2f cm equivalent to = %.2f inches\n",cen,inc);
}