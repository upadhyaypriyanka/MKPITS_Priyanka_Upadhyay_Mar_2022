#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b;
	while(a<=30){
		if(a%2==0)
		{
			b=a*a;
			printf("square of the even number is: %d\n",b);
			
		}
		a++;
	
	}
}