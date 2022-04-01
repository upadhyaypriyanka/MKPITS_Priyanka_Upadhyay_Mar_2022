#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,sw;
	printf("Enter the value of num1 and num2\n");
	scanf("%d %d",&num1,&num2);
	sw=num1;
	num1=num2;
	num2=sw;
	printf("After swapping\n num1=%d num2=%d",num1,num2);
}