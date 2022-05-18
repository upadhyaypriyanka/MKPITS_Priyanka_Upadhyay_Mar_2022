#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,i,j,f=0;
	
	printf("Enter size 1st array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter 1st array element\n");
	for(i=0;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter size 2nd array\n");
	scanf("%d",&m);
	int b[m];
	printf("Enter 2nd array element\n");
	for(j=0;j<=m;j++)
	{
		printf("b[%d]=",j);
		scanf("%d",&b[j]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[0]==b[0] || a[n-1]==b[m-1])
	{
	f=1;
	}
	}
	printf("\n");
	if(f==1)
	{
		printf("true\n");
	}
	else
	{
		printf("false");
	}
}