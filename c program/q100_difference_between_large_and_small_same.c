#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,res1,res2;
	printf("Enter small number\n");
	scanf("%d",&x);
	printf("Enter medium number\n");
	scanf("%d",&y);
	printf("Enter large number\n");
	scanf("%d",&z);
	if(x>y)
	{
	res1=x-y;	
	}
	else
	{
		res1=y-x;
	}
	if(y>z)
	{
	res2=y-z;	
	}
	else
	{
		res2=z-y;
	}
	
	if(res1==res2)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}


}

	
