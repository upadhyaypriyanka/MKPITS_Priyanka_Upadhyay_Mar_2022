#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
	fun();
}
void fun()
{
	int x1,x2;
 printf("Enter first number\n");
 scanf("%d",&x1);
  printf("Enter second number\n");
 scanf("%d",&x2);
 if(x1>x2)
 {
 printf("%d is greater",x1);
 }
 else
 {
 	printf("%d is greater",x2);
 }
}