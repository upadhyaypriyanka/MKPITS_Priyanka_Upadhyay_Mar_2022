#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	printf("Enter the value of radius\n");
	scanf("%d",&r);
	float pi=3.14, volume;
	volume=(4*pi*r*r*r)/3;  //4/3(pi*r3)
	printf("Volume of sphere :%f\n",volume);
	
	
}