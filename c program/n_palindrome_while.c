#include<stdio.h>
#include<conio.h>
void main()
{
	int n,bak,rev=0,num;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	bak=n;
	while(n>0)
	{
		num=n%10;
		rev=rev*10+num;
		n=n/10;
	}
	if(bak==rev)
	{
		printf("palindrome number");
	}
	else{
		printf("not palindrome number");
	}
	
}