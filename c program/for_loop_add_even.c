#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,add=0;
	 
	 printf(" Enter the value of num \n");
	 scanf("%d",&num);
	 for(i=1;num>=i;i++)
	 {
	 	if(i%2==0)
	 	
	 	{
	 			add=add+i;
		 }
	 
	 }
	 printf(" Addition of all even number is = %d\n",add);
}