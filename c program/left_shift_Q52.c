#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	a=a<<2;    //a=4 ; 4*2pow2;
	printf("shifted data is %d\n",a);
}