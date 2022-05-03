#include<stdio.h>
#include<conio.h>
void pri();
void main()
{
	int n,i,j,temp=0;
	printf("Enter number\n");
	scanf("%d",&n);
	pri(n);
}
void pri(int a,int k,int l,int t){
	t=0;
	printf("Prime numbers\n");
	for(k=1;k<=a;k++)
	{
		for(l=2;l<=k-1;l++)
		{
			if(k%l==0)
			{
				t=t+1;
			}
		}
		if(t==0)
		{
			printf("%d\n",k);
		}
		else
		{
			t=0;
		}
	}
}