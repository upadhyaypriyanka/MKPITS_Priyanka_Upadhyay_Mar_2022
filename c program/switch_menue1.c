#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	 
	int choice;
	printf("press 1 for addition\n");
	printf("press 2 for sustraction\n");
		printf("press 3 for multiplication\n");
		printf("press 4 for division\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		
	switch(choice){
		case 1:
			printf("Enter the two numbers for addition\n");
			printf("first number is: \n");
			scanf("%d",&a);
			printf("second number is: \n");
			scanf("%d",&b);
			int add=a+b;
			printf("Addition of a and b is :%d\n",add);
			break;
			
			case 2:
			printf("Enter the two numbers for substraction\n");
			printf("first number is: \n");
			scanf("%d",&a);
			printf("second number is: \n");
			scanf("%d",&b);
			int sub=a-b;
			printf("Substraction of a and b is :%d\n",sub);
			break;
			
			case 3:
			printf("Enter the two numbers for multiplication\n");
			printf("first number is: \n");
			scanf("%d",&a);
			printf("second number is: \n");
			scanf("%d",&b);
			float mul=a*b;
			printf("Multiplication of a and b is :%f\n",mul);
			break;
			
			case 4:
			printf("Enter the two numbers for division\n");
			printf("first number is: \n");
			scanf("%d",&a);
			printf("second number is: \n");
			scanf("%d",&b);
			float div=a/b;
			printf("Division of a and b is :%f\n",div);
			break;
			
			default:
				printf("choise is invalid\n");
			
			
			
			
	}	
	
}