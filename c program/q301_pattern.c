#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
    for(i='A';i<='C';i++)
    {
        for(k='C';k>=i;k--)
        {
            printf(" ");
        }
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}