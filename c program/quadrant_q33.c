#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf(" Enter the value of x\n");
	scanf(" %d",&x);
	printf(" Enter the value of y\n");
	scanf(" %d",&y);
	
	if( (x>0) && (y>0))
	{
		printf(" Quadrant-I :(%d,%d)",x,y);
	}
	else
	if(( x<0) && (y>0))
	{
		printf(" Quadrant-II (%d,%d)",x,y);
	}
	else
	if((x<0) && (y<0))
	{
		printf(" Quadrant-III (%d,%d)",x,y );
	}
	else
	if((x>0) && (y<0))
	printf(" Quadrant-IV (%d,%d)",x,y);
	
}