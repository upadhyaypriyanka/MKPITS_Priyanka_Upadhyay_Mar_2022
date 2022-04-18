#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,m=0;
	printf(" Enter the value of num\n");
	scanf(" %d",&num);
	i=1;
	while(i<=num){
		if(num%i==0)
		{
			m=m+1;
		}
		i++;
	}
	if(m==2)
	{
		printf(" %d is prime number",num);
	}
	else
	{
		printf(" %d is not prime number",num);
	}
	
}