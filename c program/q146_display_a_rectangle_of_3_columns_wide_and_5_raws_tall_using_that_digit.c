#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i;
	printf(" Enetr the number whose you want the rectengle\n");
	scanf("%d",&i);
	 printf("Rectangle\n");
    for(r=1;r<=5;r++)
   
    {
        for(c=1;c<=3;c++)
        {
            if(r==1 || r==5 || c==1 || c==3)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}