#include<stdio.h>
#include<conio.h>
void arm();
void main()
{
	int a;
	printf("Enter number\n");
	scanf("%d",&a);
	arm(a);	
}
void arm(int s,int res,int b,int c,int d)
{
	int num=s;
	res=1;
	
	
		b=num%10;
		num=num/10;
		c=num%10;
		num=num/10;
		d=num%10;
		res=(b*b*b)+(c*c*c)+(d*d*d);
	
		if(s==res)
		{
			printf("%d is armstrong number\n",res);
		}
		else
		{
			printf("it is not armstrong number\n");
		}
	
}