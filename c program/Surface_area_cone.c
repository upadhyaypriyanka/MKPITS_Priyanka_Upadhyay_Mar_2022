#include<stdio.h>
#include<conio.h>
void main()
{
	int r,l;
	printf("Enter the value of radius\n");
	scanf("%d",&r);
	printf("Enter the value of slant height\n");
	scanf("%d",&l);
	 float surface=3.14*r*(r+l);  //surface area= pi*r2+pi*r*l = pi*r(r+l)
	 printf(" Total Surface Area Of Cone: %f ",surface);
}