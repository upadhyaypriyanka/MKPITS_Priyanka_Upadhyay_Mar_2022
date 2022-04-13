#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rev=0,n1;
	printf(" Enter the value of num\n");
	scanf("%d",&num);
	while(num>0)
	{
		n1=num%10;
		rev=rev*10+n1;
		
		
		num=num/10;
		}
		printf("  revers value is %d",rev);	

	}
		