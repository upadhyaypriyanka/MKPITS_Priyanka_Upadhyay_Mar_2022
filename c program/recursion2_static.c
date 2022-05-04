#include<stdio.h>
#include<conio.h>

void fun();
void main()

{
fun();	
}
void fun()
{
	static int i=1;
	if(i==10)
	return;
	printf("%d\n",i);
	i++;
	fun();
	
}