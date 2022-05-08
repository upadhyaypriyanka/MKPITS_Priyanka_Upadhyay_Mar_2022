#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("Enter first integer\n");
	scanf("%d",&a);
	printf("Enter second integer\n");
	scanf("%d",&b);
	c=100-a;
	d=100-b;
	if(a==b)
	{
		printf("0");
	}
	else
	if(c<d)
	{
		printf("%d is nearest to the value 100\n",a);
	}
	else
	{
		printf("%d is nearest to the value 100\n",b);
	}
}