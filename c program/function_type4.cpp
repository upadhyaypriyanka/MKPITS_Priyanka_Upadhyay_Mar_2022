#include<stdio.h>
#include<conio.h>
int fun();
int main()
{
	int r;
	r=fun();
	printf("%d",r);
}
int fun()
{
	int a,b,res;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	res=a+b;
	return res;
}