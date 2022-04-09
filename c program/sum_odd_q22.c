#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,ores=0;
	
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("enter the value of c\n");
	scanf("%d",&c);
	printf("enter the value of d\n");
	scanf("%d",&d);
	printf("enter the value of e\n");
	scanf("%d",&e);
	
	if(a%2!=0)
	{
		ores=ores+a;
	}
	if(b%2!=0)
	{
		ores=ores+b;
	}
	if(c%2!=0)
	{
		ores=ores+c;
	}
	if(d%2!=0)
	{
		ores=ores+d;
	}
	if(e%2!=0)
	{
		ores=ores+e;
	}
	printf("sum of all odd number is :%d\n",ores);
	
}
