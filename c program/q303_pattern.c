#include<stdio.h>
#include<conio.h>
void main()
{

int r,c;
 for(r=5;r>=1;r--)
 {
     for(c=1;c<=5;c++)
     {
         if(r+c>5)
         {
             printf("%d",r);
         }
         else{
             printf(" ");
         }
         
         
     }
     printf("\n");
 }
}