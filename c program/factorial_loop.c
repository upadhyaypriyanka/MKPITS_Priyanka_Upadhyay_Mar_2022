#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,fact=1;
	printf(" Enter the value of num \n");
	scanf(" %d",&num);
	
	i=num;
	while(i>=1)
	{
		
	fact=fact*i;	
		
	
		i--;
			
	}
	printf(" %d",fact);
	
	}