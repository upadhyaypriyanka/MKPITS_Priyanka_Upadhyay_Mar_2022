#include<stdio.h>
#include<conio.h>
void fun1();
void add();
void sub();
void mul();
void div();
void main()
{
	 fun1();
}

void fun1()
{
	int a,b;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);

	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	
}
void add(int x,int y)
{
	int s;

	s=x+y;
	printf(" Addition of two number is %d\n",s);
}
void sub(int x,int y)
{
	int s;

	s=x-y;
	printf(" Subtraction of two number is %d\n",s);
}
void mul(int x,int y)
{
	int s;

	s=x*y;
	printf(" Multiplication of two number is %d\n",s);
}
void div(int x,int y)
{
	int s;

	s=x/y;
	printf(" Division of two number is %d\n",s);
}
