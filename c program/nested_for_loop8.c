#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c%2==0)
			{
				printf(" %d",0);
			}
			else
			{
				printf(" %d",1);
			}
		}
		printf("\n");
	}
}