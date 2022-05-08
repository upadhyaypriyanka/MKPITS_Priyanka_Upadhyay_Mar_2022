#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,f=0;
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(a[i]==1 && a[i+1]==2 && a[i+2]==3)
		{
			f=1;
		}
	}
	if(f==1)
	{
	printf("1");
	}
	else
	{
		printf("0");
	}
}