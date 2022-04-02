#include<stdio.h>
#include<conio.h>
void main()
{
	int r,h;
	printf("Enter the value of radius\n");
	scanf("%d",&r);
	printf("Enter the value of height\n");
	scanf("%d",&h);
	float volume,pi=3.14;
	volume=(pi*r*r*h)/3;
	printf("Volume of cone is : %f",volume);
}