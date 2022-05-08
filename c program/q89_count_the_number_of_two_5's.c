#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i,b=0;
	for(i=0;i<=5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		if(a[i]==5 && (a[i+1]==5 || a[i+1]==6))
		{
			b=b+1;
			printf("%d",b);
		}
	}
	printf("%d",b);
	
}