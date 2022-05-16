#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],i,j;
	
	printf("Enter array\n");
	for(i=0;i<=3;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=3;i++)
	{
	if(i==0)	
	{
		j=a[i];
	}
	a[i]=a[i+1];
	if(i==3)
	{
	a[i]=j;	
	}
	
	}
	printf("New array\n");
	for(i=0;i<=3;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}