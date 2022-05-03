#include<stdio.h>
#include<conio.h>
int fun();
int fun1();
void main()
{
int a,b,res;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
res=fun(a,b);
res=fun1(a,b);
printf("%d",res);	
}
int fun(int x,int y)
{
	int r;
	r=x+y;
	return r;
}
int fun1(int x,int y)
{
	int r;
	r=x-y;
	return r;
}