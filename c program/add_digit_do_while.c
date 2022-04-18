#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n1,add=0;
	printf("enter number\n");
	scanf("%d",&i);
	do
	{
	n1=i%10;
	add=add+n1;
	i=i/10;
		
	}
	while(i>0);
	printf("addition of digit is : ");
	printf("%d\n",add);
}