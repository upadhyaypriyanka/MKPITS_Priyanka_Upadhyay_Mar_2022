#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf(" Enter the value of a \n");
	scanf("%d",&a);
	printf(" enter the value of b \n");
	scanf("%d",&b);
	printf(" Before swaping a=%d and b=%d\n",a,b);
	 
	 b=a+b;  // 10=7+3;
	 a =b-a;  // 3 =10-7;
	 b=b-a;   //  7 =10-3;
	 
	 printf(" After swaping a=%d and b=%d",a,b);
	 
}