#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
	int a=2,b=3;
	printf("a=%d\n b=%d\n",a,b);
	fun(a,b);
		printf("a=%d\n b=%d\n",a,b);
}
void fun(int x,int y)
{
	x=12;
	y=13;
}