#include<stdio.h>
#include<conio.h>
void main()
{
	int r,h;
	printf("Enter the radius\n");
	scanf("%d",&r);
	printf("Enter the height\n");
	scanf("%d",&h);
	float volume=3.14*r*r*h;
	printf("Volume of cylinder is : %f\n",volume);	
}