#include<stdio.h>
#include<conio.h>
void swi();
void main()
{
swi();	
}
void swi()
{
	int a;
	printf("Enter the number from 1 to 12\n");
	scanf("%d",&a);
	switch(a){
	        case 1:
			printf("January\n");break;
			case 2:
			printf("February\n");break;
			case 3:
			printf("March\n");break;
			case 4:
			printf("April\n");break;
			case 5:
			printf("May\n");break;
			case 6:
			printf("June\n");break;
			case 7:
			printf("July\n");break;
			case 8:
			printf("August\n");break;
			case 9:
			printf("September\n");break;
			case 10:
			printf("October\n");break;
			case 11:
			printf("Novmber\n");break;
			case 12:
			printf("December\n");break;
			default:printf("Invalid choice\n");break;
	}
}