#include<stdio.h>
#include<conio.h>
void main()
{
	int num,p1,n1,n2,n3;
	printf("Enter the 3 digit number\n");
	scanf("%d",&num);
	
	n1=num%10;
	p1=num/10;
	n2=p1%10;
	p1=p1/10;
	n3=p1%10;
	int arm=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
	
	if(num==arm)
	{
		printf("number is armstrong\n");
	}
	else
	{
		printf("number is not armstrong\n");
	}
}