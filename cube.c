/*Write a program to find the surface area and volume of a cube using pow() method.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    int a,surfacearea,volume;
    printf("enter the side");
    scanf("%d",&a);
    surfacearea=6*pow(a,2);
    volume=pow(a,3);
    printf("surface area = %d",surfacearea);
    printf("volume=%d",volume);
    getch();
}

