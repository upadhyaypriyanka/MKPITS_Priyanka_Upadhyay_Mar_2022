#include<stdio.h>
#include<conio.h>
int main()
{
	int p,r,t;
	float si;
	printf("Enter accepts principle\n");
	scanf("%d",&p);
	printf("Enter rate of interest\n");
	scanf("%d",&r);
	printf("Enter time\n");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("Simple interest is %.4f",si);
}