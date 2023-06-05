/*. Write a C program to check whether a given integer is prime. If it is not a prime number, display
all its factors excluding 1 and that number*/
#include <stdio.h>
void main()
{int a,i,c=0;
 printf("Enter a value: ");
 scanf("%d",&a);
 for(i=2;i<a;i++)
 { if(a%i==0)
    {c=1;
    goto end;}
    }
 end:
 if(c==1)
  { printf("The factors are: ");
   for(i=2;i<a;i++)
   { if(a%i==0)
     printf("\n%d",i);
   }
  }
   else
   printf("The number is a prime.");
   return 0;
}
