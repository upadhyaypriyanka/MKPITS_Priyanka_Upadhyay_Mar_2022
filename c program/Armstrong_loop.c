#include<stdio.h>
#include<conio.h>
void main()
{
	int num=001;
	int a,b,c,n1,res;
	printf(" Armstrong number between 1 to 1000 : \n");
	
	
	
	
	while(num<=1000)
	{
	n1=num;
	
	a=n1%10;
	n1=n1/10;
	b=n1%10;
	n1=n1/10;
	c=n1%10;
	res=(a*a*a)+(b*b*b)+(c*c*c);
	
	if(num==res)
	{
		printf(" %d\n",res);
	}
	num++;
	
}
}