#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,positive=0,negative=0;
	
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Enter the value of c\n");
	scanf("%d",&c);
	printf("Enter the value of d\n");
	scanf("%d",&d);
	printf("Enter the value of e\n");
	scanf("%d",&e);
	
	if(a>0){
		positive=positive+1;
	}
	else{
		negative=negative+1;
	}
	if(b>0){
		positive=positive+1;
	}
	else{
		negative=negative+1;
	}
	if(c>0){
		positive=positive+1;
	}
	else{
		negative=negative+1;
	}
	if(d>0){
		positive=positive+1;
	}
	else{
		negative=negative+1;
	}
	if(e>0){
		positive=positive+1;
	}
	else{
		negative=negative+1;
	}
	printf(" Total noumber of positive value is : %d\n",positive);
	printf(" Total noumber of negative value is : %d\n",negative);
}