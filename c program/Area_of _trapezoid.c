#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,h;
	printf("Enter the value of a\n");
	scanf("%d",&a);
		printf("Enter the value of b\n");
	scanf("%d",&b);
		printf("Enter the value of h\n");
	scanf("%d",&h);
	int tra=(a+b)*h/2;
	printf("Area of trapoziod : %d\n",tra);
}