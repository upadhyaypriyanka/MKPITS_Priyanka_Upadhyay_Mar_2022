#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	float sum=0;
	for(i=1;i<=50;i++)
	{
		if(i==1)
		{
			printf("1+");
		}
		else
		if(i==50)
		{
			printf("(1/%d)\n\n",i);
		}
		else
		{
			printf("(1/%d)+",i);
		}
		sum=sum+(1.0/i);
	}
	printf(" sum of the series is = %f\n",sum);
}