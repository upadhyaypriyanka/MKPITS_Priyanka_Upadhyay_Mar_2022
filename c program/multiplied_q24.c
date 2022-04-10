#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	if(a>b)
	{
	
	temp=a;
	a=b;
	b=temp;
}
	if((b%a)==0)
	{
		printf("it is multiplied\n");
	}
	else{
		printf("it is not multiplied\n");
	}
}