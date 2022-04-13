#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,fact=1;
	printf(" Enter the value of  num\n");
	scanf(" %d",&num);
	  i=1;
	  while(i<=num)
{
	fact=fact*i;
	
	i++;
	
	}	
	printf(" %d",fact);
	
	
	}