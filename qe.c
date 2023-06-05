/*Write a C program to solve the given quadratic equation.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float discriminant,r1,r2;

    printf("enter the coeffecients");
    scanf("%d%d%d",&a,&b,&c);
    discriminant=b*b-4*a*c;
    r1=-b+sqrt(discriminant)/2*a;
    r2=-b-sqrt(discriminant)/2*a;
    printf("root1=%f",r1);
    printf("root2=%f",r2);
    getch();

}
