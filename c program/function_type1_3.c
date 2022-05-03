#include<stdio.h>
#include<conio.h>
void pri();
void main()
{
  pri();	
}
void pri()
{
	int i,j,temp=0,n;
	printf("Enter number\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
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