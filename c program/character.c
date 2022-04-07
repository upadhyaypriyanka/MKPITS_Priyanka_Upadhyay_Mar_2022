#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf(" Enter the character\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90){
		printf("%c is capital letter\n",ch);
	}
	else 
	if(ch>=97 && ch<=122) {
		printf(" %c is small letter \n",ch);
		
	}
	else
	if(ch>=48 && ch<=57)
	{
		printf("%c is digit \n",ch);
	}
	else 
	if((ch>0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
	{
		printf("%c is special symbol \n",ch);
	}
	else{
		printf("Invalid Character\n");
	}
}