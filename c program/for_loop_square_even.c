#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i;
	printf(" Enter the value of a\n");
	scanf("%d",&a);
	printf(" Square of even numbers is \n");
	for(i=1;a>=i;i++)
	{
		if(i%2==0)
		{
			printf(" %d\n", i*i);
		}
	}
}