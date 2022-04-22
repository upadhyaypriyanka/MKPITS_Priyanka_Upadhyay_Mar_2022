#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],i;
	printf(" Enter 5 numbers \n");
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf(" Divided by 4 is \n");
	for(i=0;i<=4;i++)
	{
	if(a[i]%4==0)
	{
		printf("a[%d]=%d\n",i,a[i]);
		}	
	}
}