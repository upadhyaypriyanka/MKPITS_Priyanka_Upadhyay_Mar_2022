#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i,b,f=0;
	printf("Enter numbers\n");
	for(i=0;i<=5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{     b=a[i];
		if(a[i]==b && a[i+1]==b && a[i+2]==b)
		{
		f=1;	
			
		}
	}
	if(f==1)
	
	{
		printf("it is triple array\n");
	}
	else
	{
		printf("it is not triple array");
	}
	
}