#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf(" Enter the value of a\n");
	scanf("%d",&a);
	
	if((a>80) || (a<0)){
	
	printf("error \n");
}
else{
	printf(" belongs to specified range\n");
}
}