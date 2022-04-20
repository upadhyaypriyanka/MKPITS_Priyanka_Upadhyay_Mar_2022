#include<stdio.h>
#include<conio.h>
void main()
{
	int rev=0,num,n1;
	printf(" enter the value of num\n");
	scanf("%d",&num);
	
	do{
		n1=num%10;
		rev=rev*10+n1;
		num=num/10;
		
	}while(num>0);
	printf(" reverse value is : %d\n",rev);
}