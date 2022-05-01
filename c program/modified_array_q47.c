#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i;
	for(i=0;i<=5;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf("Modified Array\n");
	for(i=5;i>=0;i--)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}