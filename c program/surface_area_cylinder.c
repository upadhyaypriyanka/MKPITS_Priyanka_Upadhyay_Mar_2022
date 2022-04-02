#include<stdio.h>
#include<conio.h>
void main()
{
	int r,h;
	printf("Enter the value of radius\n");
	scanf("%d",&r);
		printf("Enter the value of height\n");
	scanf("%d",&h);
	float surface=2*3.14*r*(r+h);
	printf(" Total Surface Area Of Cylinder :%f",surface);
	
}