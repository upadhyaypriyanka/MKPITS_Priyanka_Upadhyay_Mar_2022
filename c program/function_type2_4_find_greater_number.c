#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
 int x1,x2;
 printf("Enter first number\n");
 scanf("%d",&x1);
  printf("Enter second number\n");
 scanf("%d",&x2);
 fun(x1,x2);	
}
void fun(int a,int b)
{
	if(a>b)
	{
		printf("%d is greater\n",a);
	}
	else{
		printf("%d is greater\n",b);
		
	}
	if(a==b)
	{
		printf("%d equal to %d",a,b);
	}
}