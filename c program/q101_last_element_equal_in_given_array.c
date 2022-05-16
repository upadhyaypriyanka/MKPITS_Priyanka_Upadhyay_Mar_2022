#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i,f=0;
	printf("Enter array\n");
	
	for(i=0;i<=5;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);	
	}
	for(i=0;i<=5;i++)
	{
	if(a[0]==a[5])
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