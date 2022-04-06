#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	 
	char choice;
	printf("press + for addition\n");
	printf("press - for sustraction\n");
		printf("press * for multiplication\n");
		printf("press / for division\n");
		printf("enter your choice\n");
		scanf("%c",&choice);
		
	if(choice=='+')
	{
	
			printf("Enter the two numbers for addition\n");
			printf("first number is: \n");
			scanf("%d",&a);
			printf("second number is: \n");
			scanf("%d",&b);
			int add=a+b;
			printf("Addition of a and b is :%d\n",add);
	}
			
			else
			if(choice=='-')
			{
			
			printf("Enter the two numbers for substraction\n");
			printf("first number is: \n");
			scanf("%d",&a);
			printf("second number is: \n");
			scanf("%d",&b);
			int sub=a-b;
			printf("Substraction of a and b is :%d\n",sub);
		}
			
			else
			if(choice=='*')
			{
			
			printf("Enter the two numbers for multiplication\n");
			printf("first number is: \n");
			scanf("%d",&a);
			printf("second number is: \n");
			scanf("%d",&b);
			float mul=a*b;
			printf("Multiplication of a and b is :%f\n",mul);
		}
			
			else
			if(choice=='/'){
			
			printf("Enter the two numbers for division\n");
			printf("first number is: \n");
			scanf("%d",&a);
			printf("second number is: \n");
			scanf("%d",&b);
			float div=a/b;
			printf("Division of a and b is :%f\n",div);
		}
			
			
			else{
				printf("choise is invalid\n");
			
			
			
			
	}	
}