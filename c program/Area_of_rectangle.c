#include<stdio.h>
#include<conio.h>
void main()
{
	int length,breath;
	printf("Enter the value of length and breath\n");
	scanf("%d %d",&length,&breath);
	int rec=length*breath;
	printf("Area of rectangle %d",rec);
}