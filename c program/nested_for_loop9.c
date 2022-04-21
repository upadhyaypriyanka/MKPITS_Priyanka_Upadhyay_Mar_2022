#include<stdio.h>
#include<conio.h>
void main()
{
	int r,sp,st;
	for(r=1;r<=4;r++)
	{
		for(sp=1;sp<=40-r;sp++)
		{
		printf(" ");	
		}
	
	for(st=1;st<=r;st++)
	{
	printf(" * ");	
	}
	printf("\n");
}

}
