#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,s;
float sol1,sol2;
printf("Enter the contstants of the quadratic equation");
scanf("%d%d%d",&a,&b,&c);
printf("\nThe quadratic equation is: %d*x^2+%d*x+%d",a,b,c);
s=(b*b)-(4*a*c);
if(s>0)
{
sol1=(-b+sqrt(s))/(2*a);
sol2=(-b-sqrt(s))/(2*a);
printf("\nThe roots of the equation are:%f,%f",sol1,sol2);
}
else if(s==0)
{
sol1=-b/(2*a);
printf("\nThe roots of the equation are:%f,%f",sol1,sol1);
}
else if(s<0)
{
sol1=sqrt((4*a*c)-(b*b))/2a;
sol2=sqrt((4*a*c)-(b*b))/2a;
printf("\nThe roots of equation are:");
printf("\n-%d+%fi",b,sol1);
printf("\n-%d-%fi",b,sol2);
}
getch();
}
