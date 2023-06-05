#include <stdio.h>

void main()
{
   int a,flag=0,i;
   printf("enter the number");
   scanf("%d",&a);
   if(a==0 || a==1)
   {
       flag=1;
   }
   for(i=2;i<a;i++)
   {
       if(a%i==0)
       {
           flag=1;
           break;
       }
   }
   if(flag==0)
   {
       printf("%d is prime",a);
   }else
   {
   printf("%d is not prime",a);
   }
   getch();
}
