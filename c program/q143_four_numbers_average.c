#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("Enter any four integer\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	 float avg=(a+b+c+d)/4;
	printf("%.2f",avg);
}