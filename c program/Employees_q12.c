#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int id;
int hours;
float amount, salary;

printf(" Enter the employees ID : \n");
scanf("%d",&id);
printf(" Enter the working hours : \n");
scanf("%d",&hours);
printf("Enter salary amount/hours : \n");
scanf("%f",&amount);

salary=amount * hours;
	printf(" Employees ID = %d\n",id);
	printf(" salary = %.2f\n",salary);
}