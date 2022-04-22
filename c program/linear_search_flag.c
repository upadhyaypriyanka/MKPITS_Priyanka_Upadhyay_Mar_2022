#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,ser,f=0;
	printf(" Enter 5 numbers\n");
	for(i=0;i<=4;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);	
	}
	printf(" enter number you want to search\n");
	scanf(" %d",&ser);
	
	for (i=0;i<=4;i++)
	{
		if(a[i]==ser)
		{
		f=1;	
		}
	}
	
	if(f==1)
	{
		printf(" searching number present\n");
	}
	else
	{
		printf(" searching number is not present\n");
	}
}