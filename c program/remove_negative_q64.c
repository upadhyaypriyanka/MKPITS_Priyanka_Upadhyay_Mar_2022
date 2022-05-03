#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Emter the value of a \n");
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d",a*-1);
		
	}
	else{
		printf("%d",a);
	}
}