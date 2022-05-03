#include<stdio.h>
#include<conio.h>
void neg();
void main()
{
neg();
}
void neg()
{
	int a;
	printf("Enter number\n");
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d",a*-1);
	}
	else{
		printf("%d",a);
	}
}