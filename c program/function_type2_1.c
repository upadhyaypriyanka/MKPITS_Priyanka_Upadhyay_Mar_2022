#include<stdio.h>
#include<conio.h>
void neg();
void main()
{
	int a;
	printf("Enter value\n");
	scanf("%d",&a);
	neg(a);
	
}
void neg(int x)
{
	if(x<0)
	{
		printf("%d",x*-1);
		
	}
	else{
		printf("%d",x);
	}
}