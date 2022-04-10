#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	
	printf("enter the first integer :\n");
	scanf("%d",&x);
	printf("enter the second integer :\n");
	scanf("%d",&y);
	printf("enter the third integer :\n");
	scanf("%d",&z);
	
	if(x>y && x>z)
{
	printf("%d is max \n",x);
}

if(y>x && y>z)
{
	printf("%d is max \n",y);
}
if( z>x && z>y)
{
	printf("%d is max \n",z);
	}	
}