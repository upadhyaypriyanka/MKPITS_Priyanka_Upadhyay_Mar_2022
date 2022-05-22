#include<stdio.h>
#include<conio.h>
int neg();
void main()
{
	int a,res;
	printf("Enter value\n");
	scanf("%d",&a);
	res = neg(a);
	if(res==1)
	{
	printf("%d",a*-1);
	}
	else
	{
	printf("%d",a);	
	}
	
}
int neg(int x)
{
	if(x<0)
	{
		
	return 1;	
	}
	else{
		return 0;
	}
}