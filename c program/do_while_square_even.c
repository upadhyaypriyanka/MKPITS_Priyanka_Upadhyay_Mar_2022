#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,b;
	printf(" Enter the value of a \n");
	scanf("%d",&a);
	i=1;
	printf("Square of the even numbers is \n");
	do
	{
		if(i%2==0)
		{
			b=i*i;
			printf(" %d\n ",b);
		}
		
		i++;
	}
	while(i<=a);
	
}