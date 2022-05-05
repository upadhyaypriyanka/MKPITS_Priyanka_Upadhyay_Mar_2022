#include<stdio.h>
#include<conio.h>
void arm();
void main()
{
arm();	
}
void arm()
{
	int i,a,b,c,d,res;
	printf("Enter number\n");
	scanf("%d",&a);
	int num=a;
	
	
		b=num%10;
		num=num/10;
		c=num%10;
		num=num/10;
		d=num%10;
		res=(b*b*b)+(c*c*c)+(d*d*d);
		
		if(a==res)
		{
			printf("%d is armstrong number\n",res);
		}
		else
		{
			printf("it is not armstrong number\n");
		}
	
}