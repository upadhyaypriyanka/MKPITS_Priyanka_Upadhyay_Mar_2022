#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,n1,res,num;
	printf(" armstromg number from 1 to 999\n");
	for(num=000;num<=999;num++)
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
			printf("%d\n",res);
		}
	}
}