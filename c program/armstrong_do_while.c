#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,num=000,res,n1;
	printf("armstrong number from 1 to 999 \n");


	do
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
       	num++;
	}
	while(num<=999);
	

}