#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter first integer\n");
	scanf("%d",&a);
	printf("Enter second integer\n");
	scanf("%d",&b);
	if(a<0 || b<0)
	{
		printf("Enter positive integer\n");
	}
	else
	if((a>=20 && a<=30) || (b>=20 && b<=30))
	{
	if(a>b)
	{
		printf("%d",a);
		}	
		
	
	else
	{
	printf("%d",b);	
	}
}
else
{
	printf("0");
}
	
	
}