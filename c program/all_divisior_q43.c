#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a;
	
	printf(" Enter the value of a \n");
	scanf("%d",&a);
	printf(" All positive divisors of %d are\n",a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf(" %d\n",i);
		}
	}

}