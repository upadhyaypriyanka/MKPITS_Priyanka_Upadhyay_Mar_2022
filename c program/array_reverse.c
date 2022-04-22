#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],i;
	printf(" Enter 5 number\n");
	for(i=0;i<=4;i++)
	{
		printf("a[%d]= ",i);
		scanf(" %d",&a[i]);
			}
			printf(" Reverse array is \n");
	for(i=4;i>=0;i--)
	{
	printf("a[%d]=%d\n",i,a[i]);	
	}
}
