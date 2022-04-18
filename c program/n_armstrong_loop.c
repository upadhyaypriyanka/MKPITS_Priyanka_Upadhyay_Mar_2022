#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0;
	printf(" Enter the num\n");
	scanf(" %d",&num);
	
	int t=num;
	while(num>0)
	{
		int r=num%10;
	sum=sum+(r*r*r);
	num=num/10;
	}
	if(t==sum){
		printf(" armstrong number : \n");
	}
	else{
		printf(" it is not armstrong number : ");
	}
}