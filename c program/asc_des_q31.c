#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    
    printf(" Enter the value of a : ");
    scanf(" %d",&a);
    printf(" Enter the value of b : ");
    scanf(" %d",&b);
    if(a<b)
    {
        printf(" ascending order : %d,%d",a,b);
    }
    else
    {
        printf(" descending order : %d,%d ",a,b);
    }
}