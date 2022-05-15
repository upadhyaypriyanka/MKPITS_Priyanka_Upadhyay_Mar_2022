#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf(" Enter numbers\n");
	scanf("%d %d",&a,&b);
	if (a==b)
	{
		printf("0");
	}
	else
	{
	c=(a%5);
	d=(b%5);
	if(c==d)
	{
	if(a<b)
	{
		printf("%d is smaller\n",a);
	}
	else
	{
	printf("%d is smaller\n",b);	
	}
}
else
{
	if(a>b)
	{
		printf("%d is larger\n",a);
	}
	else{
		printf("%d is larger\n",b);
	}	
     }
	}
	
	

	
}