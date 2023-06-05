#include<stdio.h>
void main()
{
    float m1,m2,m3,percent,sum;
    char ch;
    printf("enter the 3 marks");
    scanf("%f%f%f",&m1,&m2,&m3);
    printf("Are you eligible to sports quta if it yes type y otherwise n");
    scanf("%c",&ch);
    if(ch=='y')
    {
        gotox:
    }else
    {
        sum=m1+m2+m3;
        percent=(sum/300)*100;
        printf("Sum=%d \npercentage=%d",sum,percent);
        gotoz:
    }
    x:
        sum=m1+m2+m3+10;
        percent=(sum/300)*100;
        printf("Sum=%d \npercentage=%d",sum,percent);
        z:
            getch();

}
