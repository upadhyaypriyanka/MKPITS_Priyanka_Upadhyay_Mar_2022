#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],n,i;
	printf(" enter the numbers\n");
	
	for(i=0;i<=6;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&n);
		if(n>0)
		{
			a[i]=n;
		}
		else
		{
			a[i]=100;
		}
	}
	printf(" Replace values\n");
	for(i=0;i<=6;i++)
{
	printf("a[%d]=%d\n",i,a[i]);
	}	
}
