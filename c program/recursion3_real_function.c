#include<stdio.h>
#include<conio.h>

void fun();
void main()

{
fun();	
}
void fun(int a)
{

	if(a==10)
	return;
	printf("%d\n",a);

	fun(a+1);
	
}