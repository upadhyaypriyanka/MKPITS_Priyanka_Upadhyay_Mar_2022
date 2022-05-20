#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	printf("Enter the value of y\n");
	scanf("%d",&y);
	printf("Enter the value of z\n");
	scanf("%d",&z);
	
	printf("(x+y).z is = %d and x.y + y.z is = %d ",(x+y)*z,x*y+y*z);
}


