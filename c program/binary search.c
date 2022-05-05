#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,temp,j,ser;
	for(i=0;i<=9;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("After sorting\n");
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
		printf(" Enter number you want to search\n");
	scanf("%d",&ser);
	
	for(i=0;i<=9;i++)
	{
		if(a[i]==ser)
		{
			printf(" searching number is present \n" );
		}
	}
}