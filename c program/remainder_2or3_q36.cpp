#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp,i;
	printf(" Enter the value of a\n");
	scanf("%d",&a);
	printf(" Enter the value of b\n");
	scanf(" %d",&b);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
		
	}
	printf(" values whose remaider 2 or 3 are \n");
	for(i=a;i<=b;i++)
	{
		if((i%7==2) || (i%7==3))
		{
			printf("%d\n",i);
			
		}
	}
}