#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mul();
void div();
void main()
{
add();
sub();
mul();
div();	
}
void add()
{
	printf("Addition\n");
	int a,b,add;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of a\n");
	scanf("%d",&b);
	add=a+b;
	printf("addition of a and b is %d\n",add);
}
void sub()
{
	printf("Subtraction\n");
	int a,b,sub;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of a\n");
	scanf("%d",&b);
	sub=a-b;
	printf("subtraction of a and b is %d\n",sub);
}
void mul()
{
	printf("Multiplication\n");
	int a,b,mul;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of a\n");
	scanf("%d",&b);
	mul=a*b;
	printf("addition of a and b is %d\n",mul);
}
void div()
{
	printf("Division\n");
	int a,b;
	float div;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of a\n");
	scanf("%d",&b);
	div=a/b;
	printf("addition of a and b is %f\n",div);
}