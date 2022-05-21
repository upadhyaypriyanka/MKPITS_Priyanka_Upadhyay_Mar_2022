#include<stdio.h>
#include<conio.h>
int a,b;
int add();
int sub();
int div();
int mul();
void main()
{
	int r,ad,s,d,m;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	ad=add();
	s=sub();
	d=div();
	m=mul();
	printf("addition of two number is %d\n",ad);
	printf("substraction of two number is %d\n",s);
	printf("division of two number is %d\n",d);
	printf("multiplication of two number is %d\n",m);
	
}
int add()
{
	int add;
	add=a+b;
	return add;
	
}
int sub()
{
	int sub;
	sub=a-b;
	return sub;
	
}
int div()
{
	int div;
	div=a/b;
	return div;
	
}
int mul()
{
	int mul;
	mul=a*b;
	return mul;
	
}
   