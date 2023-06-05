/*Write a C program to find the quadrant of operation for the given co-ordinates.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("Enter the co-ordinates:\n");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    printf("\nFirst quadrant");
    else if(x<0&&y>0)
    printf("\nSecond quadrant");
    else if(x<0&&y<0)
    printf("Third quadrant");
    else if(x>0&&y<0)
    printf("Fourth quadrant");
    else
    printf("Origin");
    getch();
}
