#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the value of a and b \n");
	scanf("%d %d",&a,&b);
	int r=a%b;
	if(r==0)
	{
	printf("a is divided by b");
}
if(r!=0)
{
	printf("a is not divided by b ");
}
	
	
}