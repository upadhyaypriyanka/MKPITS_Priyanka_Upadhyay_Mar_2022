#include<stdio.h>
#include<conio.h>
int i=1;
void fun();
void main()

{
fun();	
}
void fun()
{
	if(i==10)
	return;
	printf("%d\n",i);
	i++;
	fun();
	
}