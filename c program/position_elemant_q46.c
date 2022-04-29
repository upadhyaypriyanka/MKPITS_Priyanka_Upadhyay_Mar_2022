#include<stdio.h>
#include<conio.h>
void main()
{
  int n1[4],i;
  for(i=0;i<=4;i++)
  {
  	printf("n1[%d]=",i);
  	scanf("%d",&n1[i]);
  	
	  }	
	  printf("position of an array which is less than five\n");
	  for(i=0;i<=4;i++)
  {
  	if(n1[i]<5)
  	{
  		printf("n1[%d]=%d\n",i,n1[i]);
  		
	  }
  	
	  }	
}
