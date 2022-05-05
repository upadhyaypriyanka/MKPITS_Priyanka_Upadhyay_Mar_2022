#include<stdio.h>
#include<conio.h>
int fun();
void main()
{
	int x1,x2,s;
 printf("Enter first number\n");
 scanf("%d",&x1);
  printf("Enter second number\n");
 scanf("%d",&x2);
  s = fun(x1,x2);
 if(s==1){
 
 printf("%d is greater",x1);
 }
 else
 {
 	printf("%d is greater",x2);
 }
	
}
int fun(int a,int b)
{
if(a>b)	
 {
 return 1;
 }
 else
 {
 	return 0;
 }
}