#include<stdio.h>
#include<conio.h>
void main()
{
	int sec,h,m,s;
	printf("enter second : ");
	scanf("%d",&sec);
	
	h= (sec/3600);
	m= (sec - (3600*h))/60;
	s = (sec-( 3600*h)-(m*60));
	printf(" hour:minute:second = %d:%d:%d\n",h,m,s);
}