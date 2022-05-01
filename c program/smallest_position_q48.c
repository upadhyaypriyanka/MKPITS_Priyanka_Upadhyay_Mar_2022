#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i,small,pos;
	for(i=0;i<=5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		if(small>a[i])
		{
			small=a[i];
			pos=i+1;
		}
		
	}
	printf("Smallest element is a[%d] , it's position is %d",small,pos);
}