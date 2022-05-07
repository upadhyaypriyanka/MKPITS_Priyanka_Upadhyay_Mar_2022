#include<stdio.h>
#include<conio.h>
void main()
{
	
   int i,a,rev=0,rem,bak;
   printf("enter five digit number\n");
   scanf("%d",&a);
   bak=a;
   for(i=1;i<=a; )
   {
      rem=a%10;
      rev=rev*10+rem;
      a=a/10;
   }
   if(rev==bak)
   {
       printf("number is palindrom \n",rev);
       
   }
   else
   {
       printf(" number is not palindrom\n",rev);
   }

    
}

