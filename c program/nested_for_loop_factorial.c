#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,j,a[4],fact=1;
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf(" %d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			fact=fact*j;
		}
		printf(" factorial of %d = %d\n",a[i],fact);
		fact=1;
	}
}