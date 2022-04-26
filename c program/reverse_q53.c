#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,rev=0,rem;
	printf(" Enter number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
printf(" reverse number = %d",rev);
	
}