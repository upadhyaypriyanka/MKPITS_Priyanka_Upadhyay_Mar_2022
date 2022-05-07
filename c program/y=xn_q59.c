#include<stdio.h>
#include<conio.h>
void main()
{
	int i,y=1,n,x;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		y=y*x;
	
	}
		printf("%d to the power %d is %d\n",x,n,y);
	
}