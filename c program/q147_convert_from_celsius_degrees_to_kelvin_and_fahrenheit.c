#include<stdio.h>
#include<conio.h>
void main()
{
	float celsius,kelvin,fahrenheit;
	printf("Enter celsius\n");
	scanf("%f",&celsius);
	
    kelvin = celsius + 273.15;
	fahrenheit = celsius * 9 / 5 + 32;
	
	printf("celsius degrees to kelvin is %.2f\n",kelvin);
	printf("celsius degrees to fahrenheit is  %.2f\n",fahrenheit);
	  
}