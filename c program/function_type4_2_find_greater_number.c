#include<stdio.h>
#include<conio.h>
int fun();
void main()
{
 int s;
 s=fun();
 if(s==1)
 {
 	printf("first number is greater\n");
 }
 else
 {
 	printf(" second number is greater\n");
 }
}
 int fun()
 {
 	int x1,x2;
  printf("Enter first number\n");
 scanf("%d",&x1);
  printf("Enter second number\n");
 scanf("%d",&x2);
 if(x1>x2)
 {
 	return 1;
 }
 else
 {
 	return 0;
 }
 }