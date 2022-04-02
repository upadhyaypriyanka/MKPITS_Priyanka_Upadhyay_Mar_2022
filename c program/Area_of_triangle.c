#include<stdio.h>
#include<conio.h>
void main()
{
	int base,height;
	printf("Enter the value of base\n");
	scanf("%d",&base);
	printf("Enter the value of height\n");
	scanf("%d",&height);
	int tri=(base*height)/2;
	printf("Area of triangle is: %d\n",tri);
}