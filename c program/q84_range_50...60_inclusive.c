#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter first integer\n");
    scanf("%d",&a);
    printf("Enter second integer\n");
    scanf("%d",&b);
    if((a>=40 && a<=50 && b>=40 && b<=50) || (a>=50 && a<=60 && b>=50 && b<=60))
    {
    	printf("1");
    	
	}
	else
	{
		printf("0");
	}
}