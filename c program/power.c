#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,y,pow=1;
	printf(" Enter the value of x\n");
	scanf(" %d",&x);
	printf("Enter the value of y\n");
	scanf("%d",&y);
	
	i=1;
	while(i<=y)
	{
		pow=pow*x;
		printf(" %d",pow);
		i++;
	}
}