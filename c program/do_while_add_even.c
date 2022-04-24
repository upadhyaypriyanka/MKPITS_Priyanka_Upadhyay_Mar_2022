#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,add=0;
	printf(" Enter the value of num\n");
	scanf("%d",&num);
	i=1;
	do
	{
		if(i%2==0)
		{
				add=add+i;
		}

		i++;
	}
	while(num>=i);
	printf(" addition of all even number is = %d\n",add);
	
}