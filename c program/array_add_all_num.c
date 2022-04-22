#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],i,add=0;
	printf(" Enter 5 numbers\n");
	
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		add=add+a[i];
	}
	printf(" Addition of all element is = %d\n",add);
}