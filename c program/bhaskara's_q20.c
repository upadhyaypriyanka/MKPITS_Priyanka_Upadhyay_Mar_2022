#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,x1,x2;
	printf(" Enter the value of a : ");
	scanf("%f",&a);
		printf(" Enter the value of b : ");
	scanf("%f",&b);
		printf(" Enter the value of c : ");
	scanf("%f",&c);
	
float	rab= ((b*b)-(4*a*c));
	if(rab>0 && a!=0){
		rab = sqrt(rab);
		x1 = (-b + rab)/(2*a);
		x2 = (-b - rab)/(2*a);
		printf( " x1 is : %.4f\n",x1);
		printf(" x2 is : %.4f\n ",x2);	
		
	}
	else{
		printf(" Impossible to fine the roots \n ");
	}
}