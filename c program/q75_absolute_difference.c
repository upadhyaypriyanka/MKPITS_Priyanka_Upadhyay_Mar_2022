#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	if(n>51)
	{
		printf("triple the absolute difference between n and 51 is %d",(n-51)*3);
	}
	if(n<51)
	{
		printf("absolute difference between n and 51 is %d",(51-n));
	}
	if(n==51)
	{
		printf("absolute difference between n and 51 is %d",(n-51));
	}
}