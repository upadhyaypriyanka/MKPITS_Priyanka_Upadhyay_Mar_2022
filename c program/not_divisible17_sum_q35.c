#include<stdio.h>
#include<stdio.h>
void main()
{
	int a,b,sum=0,i,temp;
	printf(" Enter the value of a \n");
	scanf("%d",&a);
	printf(" Enter the value of b \n");
	scanf("%d",&b);
	
	if(a>b)
	{
	temp=a;
	a=b;
	b=temp;	
	}
	 for(i=a;i<=b;i++)
	 {
	 	if(i%17!=0){
		 
	 	sum=sum+i;
	 }
	 	printf(" sum = %d\n",sum);
	 }
	 
}