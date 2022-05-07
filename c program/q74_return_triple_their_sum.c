#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter first integer\n");
	scanf("%d",&a);
	printf("Enter second integer\n");
	scanf("%d",&b);
	if(a==b){
		printf("sum of integer is %d",(a+b)*3);
	}
	else
	{
		printf("sum of integer is %d",(a+b));
	}
	
}