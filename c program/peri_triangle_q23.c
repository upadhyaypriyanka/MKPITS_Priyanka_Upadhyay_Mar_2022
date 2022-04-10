#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,res;
	
	printf("Enter the value of a : \n");
	scanf("%f",&a);
	
	printf("Enter the value of b : \n");
	scanf("%f",&b);
	
	printf("Enter the value of c : \n");
	scanf("%f",&c);
	
if( (a+b)>c && (b+c)>a && (a+c)>b)
{
	res=a+b+c;
	printf(" perimeter is : %f\n",res);
		
}
else{
	printf("not possible to creat a triangle\n");
}
}