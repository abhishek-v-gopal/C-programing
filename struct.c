#include<stdio.h>
struct student
{
    char name[20],grade[3];
    int reg_no;
    float mark;
}a;
void main()
{
    printf("enter the name");
    scanf("%s",a.name);
    printf("enter the reg_no");
    scanf("%d",&a.reg_no);
    printf("enter the mark");
    scanf("%f",&a.mark);
    printf("enter the grade");
    scanf("%s",a.grade);
    printf("\n\n\nThe entered items are\n\n");
    printf("Name:%s\n",a.name);
    printf("Reg_no:%d\n",a.reg_no);
    printf("Mark:%f\n",a.mark);
    printf("Grade:%s\n",a.grade);
    getch();
}
