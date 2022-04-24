#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,add=0;
	printf(" Enter the value of a \n");
	scanf("%d",&a);
	i=1;
	do
	{
	if(i%2!=0)
	{
		add=add+i;
		}
		i++;	
	}
	while(a>=i);
	printf(" Addition of all odd numbers is = %d\n",add);
}