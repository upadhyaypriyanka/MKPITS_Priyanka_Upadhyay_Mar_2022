#include<stdio.h>
#include<conio.h>
int fun();
int fun2();
int fun3();
int fun4();

void main()
{
	int a,b,add,sub,mul,div;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	add=fun(a,b);
	printf("%d\n",add);
	sub=fun2(a,b);
	printf("%d\n",sub);
	mul=fun3(a,b);
	printf("%d\n",mul);
	div=fun4(a,b);
	printf("%d\n",div);
	
}
int fun(int x,int y)
{
	printf("addition \n");
	int r;
	r=x+y;
	return r;
}
int fun2(int x,int y)
{
		printf("subtraction \n");
	int r;
	r=x-y;
	return r;
}
int fun3(int x,int y)
{
		printf("multiplication\n");
	int r;
	r=x*y;
	return r;
}
int fun4(int x,int y)
{
		printf("division \n");
	int r;
	r=x/y;
	return r;
}