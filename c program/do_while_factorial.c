#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,fact=1;
	printf("Enter the value of num\n");
	scanf("%d",&num);
	i=num;
	do{
		fact=fact*i;
		
		i--;
	}
	while(i>=1);
	printf("factorial is %d\n ",fact);
}