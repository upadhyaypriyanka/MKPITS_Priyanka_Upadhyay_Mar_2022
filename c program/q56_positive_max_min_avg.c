#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum=0,min,max,i;
	float avg;
	printf("enter number\n ");
	scanf("%d",&a);
	if(a<=0)
	{
		printf("enter number : ");
		
	}
	else
	{
		min=a;
		max=a;
	 for(i=0;i<=a;i++)
	 {
	 	
	 	sum=sum+a;
	 	if(a>max)
	 	{
	 		max=a;
		 }
		 if(a<min)
		 {
		 	min=a;
		 }
		 printf("enter number\n");
		 scanf("%d",&a);
	 }
	}
	avg=sum/i;
	printf("max= %d\n min= %d\n avg= %f\n total positive integer= %d\n",max,min,avg,i);
}