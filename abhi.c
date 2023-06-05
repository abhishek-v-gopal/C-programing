
/*. Write a C program to read in two integers a and b and an arithmetic operator op (character data
type). Calculate results of the expression. R=a op b. Use switch statement in your program. Also
find the maximum and minimum of those integers using the conditional operator*/
#include<stdio.h>
void main()
{
    int a,b,r,max,min;
    char op;
    printf("enter the two no.");
    scanf("%d%d",&a,&b);
    printf("select the arithematic operations (+,-,*,/):");
    scanf(" %c",&op);
    switch(op)
    {
     case '+': r=a+b;
     break;
     case '-': r=a-b;
     break;
     case '*': r=a*b;
     break;
     case '/': r=a/b;
     break;
     default: printf("ni oru pottan ada");
    }
    printf("result=%d\n",r);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    printf("max=%d\nmin=%d",max,min);
    getch();

}
