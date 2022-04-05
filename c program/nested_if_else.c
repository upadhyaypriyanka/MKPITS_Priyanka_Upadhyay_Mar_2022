#include<stdio.h>
#include<conio.h>
void main()
{
	int p1,p2,p3;
	printf("Enter the age of p1\n");
	scanf("%d",&p1);
	printf("Enter the age of p2\n");
	scanf("%d",&p2);
	printf("Enter the age of p3\n");
	scanf("%d",&p3);
	
	if(p1>p2&&p1>p3){
		printf("p1 is greater \n");
	}
	else
	if(p2>p1&&p2>p3){
	printf("p2 is greater \n");
	}
	else{
		printf("p3 is greater\n");
	}
}