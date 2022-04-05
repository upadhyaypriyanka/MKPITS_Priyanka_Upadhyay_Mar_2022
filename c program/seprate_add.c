#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n1,n2,n3;
	printf("Enter the 3 digit number\n");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	int add=n1+n2+n3;
	printf(" Addition of numbers is : %d\n",add);
}