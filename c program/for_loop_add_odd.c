#include<stdio.h>
#include<conio.h>
void main()
{
	int add=0,num,i;
	printf("enter value of num\n");
	scanf("%d",&num);
	for(i=1;num>=i;i++)
	{
		if(i%2!=0)
		{
			add=add+i;
			
		}
	}
	printf(" Addition of  all odd numbers is = %d\n",add);
}