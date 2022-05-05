#include<stdio.h>
#include<conio.h>
	int x1,x2;
int fun();
void main()
{
 int s;
 s=fun();
 if(s==1)
 {
 	printf("%d is greater\n",x1);
 }
 else
 {
 	printf(" %d is greater\n",x2);
 }
}
 int fun()
 {
 
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