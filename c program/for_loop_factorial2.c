#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,fact=1;
	printf("Enter the value of num\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		printf("Factorial is %d\n",fact);
	}
}