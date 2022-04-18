#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter the value\n");
	scanf("%d",&n);
	i=0;
	printf("odd value is \n");
	do{
		if(i%2!=0)
	{
			printf("%d\n",i);
			}
			
		i++;
	}
	while(i<=n);
}