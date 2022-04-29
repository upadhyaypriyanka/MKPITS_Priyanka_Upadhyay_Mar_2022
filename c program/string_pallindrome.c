#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[23],name1[25],s;
	printf("Enter name\n");
	scanf("%s",name);
	
	strcpy(name1,name);


	
	strrev(name);

	
   s=strcmp(name1,name);
  
  if(s==0)
  {
  	printf(" it is pallindrome\n",name1);
  }
  else
  {
  	printf(" it is not pallindrome\n",name1);
  }
}