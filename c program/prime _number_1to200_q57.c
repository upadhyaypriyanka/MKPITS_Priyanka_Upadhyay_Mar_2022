#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp=0;
	for(i=1;i<=200;i++)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				temp=temp+1;
			}
		}
		if(temp==0)
		{
			printf("%d\n",i);
		}
		else
		{
			temp=0;
		}
	}
	
}