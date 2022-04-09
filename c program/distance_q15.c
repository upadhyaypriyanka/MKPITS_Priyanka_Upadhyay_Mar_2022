#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x1,x2,y1,y2,distance;
	printf("Enter the value of x1\n ");
	scanf("%f",&x1);
	printf("Enter the value of x2\n ");
	scanf("%f",&x2);
	printf("Enter the value of y1\n ");
	scanf("%f",&y1);
	printf("Enter the value of y2\n ");
	scanf("%f",&y2);
	distance= ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	printf("distance between two point is : %f\n",sqrt(distance));
}