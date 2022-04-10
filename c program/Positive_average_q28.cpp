#include<stdio.h>
#include<conio.h>
 int main()
{
	int a,b,c,d,e,positive=0,negative=0,total;
	float avg=1;
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("Enter the value of c \n");
	scanf("%d",&c);
	printf("Enter the value of d \n");
	scanf("%d",&d);
	printf("Enter the value of e \n");
	scanf("%d",&e);
	
	if(a>0){
		positive=positive+1;
		total+=a;
		
	}
	else{
		negative=negative+1;
	}
	if(b>0){
		positive=positive+1;
		total+=b;
		
	}
	else{
		negative=negative+1;
	}
	if(c>0){
		positive=positive+1;
		total+=c;
		
	}
	else{
		negative=negative+1;
	}
	if(d>0){
		positive=positive+1;
		total+=d;
		
	}
	else{
		negative=negative+1;
	}
	if(e>0){
		positive=positive+1;
		total+=e;
		
	}
	else{
		negative=negative+1;
	}
	 avg=total/positive;
	printf(" Total nomber of positive value is : %d\n",positive);
	printf(" Average of positive value is : %.2f\n",avg);
	
	}