#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,ser;
	printf(" Enter numbers\n");
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
	scanf(" %d",&a[i]);
		
	}
	
	printf(" Enter number you want to search\n");
	scanf("%d",&ser);
	
	for(i=0;i<=4;i++)
	{
		if(a[i]==ser)
		{
			printf(" searching number is present \n" );
		}
	}
}