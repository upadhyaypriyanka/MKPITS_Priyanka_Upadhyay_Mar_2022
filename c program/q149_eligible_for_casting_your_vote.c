#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("Enter age\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Congratulation! you are eligible for casting your vote.\n");
	}
	else
	{
		printf("Sorry, you are not eligible for casting your vote.");
	}
}