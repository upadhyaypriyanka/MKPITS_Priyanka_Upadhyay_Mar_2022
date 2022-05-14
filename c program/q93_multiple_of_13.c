#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter number\n");
	scanf("%d",&a);
	if(a<=0)
	{
		printf("Enter positive number\n");
	}
	else 
	if(a%13==0)
	{
		printf("%d is multiple of 13\n",a);
	}
	else
	if(a%13==1)
	{
		printf("%d is one more then multiple of 13\n",a);
	}
	else
	{
		printf("number is not multiple of 13 and one more then multiple of 13\n ");
	}
}