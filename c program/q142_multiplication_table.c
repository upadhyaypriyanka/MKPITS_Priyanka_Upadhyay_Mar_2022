#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter tne number whose table you want\n");
	scanf("%d",&b);
	for(a=1;a<=10;a++)
	{
		c=a*b;
		printf("%d x %d = %d\n",b,a,c);
	}
}