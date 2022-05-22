#include<stdio.h>
#include<conio.h>
int x;
int neg();
int main()
{
	int res;

	res = neg();
	if(res==1)
	{
	printf("%d",x*-1);
	}
	else
	{
	printf("%d",x);	
	}
	
}
int neg()
{
	printf("Enter value\n");
	scanf("%d",&x);
	if(x<0)
	{
		
	return 1;	
	}
	else{
		return 0;
	}
}