#include<stdio.h>
#include<stdio.h>
void main()
{
	int amount,temp;
	printf(" Enter your Amount : ");
	scanf("%d",&amount);
	
	temp=amount/200;                         
	amount=amount - (temp*200);                
	printf(" notes of 200 is = %d\n",temp);
	
	
	temp=amount/100;                        
	amount=amount - (temp*100);                
	printf(" notes of 100 is = %d\n",temp);
	
	temp=amount/50;                            
	amount=amount - (temp*50);                
	printf(" notes of 50 is = %d\n" ,temp);
	
	temp=amount/20;                              
	amount=amount - (temp*20);                
    printf(" notes of 20 is = %d\n" ,temp);
    
     temp=amount/10;                          
	amount=amount - (temp*10);                 
	printf(" notes of 10 is = %d\n" ,temp);
	
	temp=amount/5;
	amount=amount-(temp*5);
	printf(" coins of 5 is = %d\n" ,temp);
	
	temp=amount/2;
	amount=amount-(temp*2);
	printf(" coins of 2 is = %d\n" ,temp);
	
	temp=amount/1;
	amount=amount-(temp*1);
	printf(" coins of 1 is = %d\n" ,temp);

}