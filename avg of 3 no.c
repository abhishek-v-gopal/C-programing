#include<stdio.h>
#include<conio.h>

void main()
{
    int num1,num2,num3,avg;
    clrscr();
    printf("enter 3 no.");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("result is %d",avg);
    getch();

}
