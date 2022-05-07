#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g,h;
	printf("Enter seven digit number\n");
	scanf("%d",&a);	
	
	b=a/1000000;
	a=a-(b*1000000);
	
	c=a/100000;
	a=a-(c*100000);
	
	d=a/10000;
	a=a-(d*10000);
	
	e=a/1000;
	a=a-(e*1000);
	
	f=a/100;
	a=a-(f*100);
	
	g=a/10;
	a=a-(g*10);
	
	h=a/1;
	
	printf("%d  %d  %d  %d  %d  %d  %d",b,c,d,e,f,g,h);
}