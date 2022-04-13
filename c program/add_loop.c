#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n1,add=0;
	printf(" enter n number ");
	scanf("%d",&num);
	
	while(num>0)
	{
		n1=num%10;
		
		
		add=add+n1;
			printf(" %d\n",add);	
		num=num/10;
	
		
	}

}