#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,n1,add=0;
	printf("Enter number\n");
	scanf("%d",&num);
	for(i=(-1);num>=i;i++)
	{
		n1=num%10;
		add=add+n1;
		num=num/10;
	}
	printf("addition of a digit is : ");
	printf("%d\n",add);
}