#include<stdio.h>

int main()
{
    int num1,num2,num3,avg;
    printf("enter 3 no.");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>0 && num2>0 && num3>0)
    {
        avg=(num1+num2+num3)/3;
        printf("average = %d",avg);
    }
    if(num1<0 || num2<0 || num3<0)
    {
        printf("hi");
    }
    getch();
}
